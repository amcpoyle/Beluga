"""Plots for lap time results."""
import matplotlib

matplotlib.use("Agg")
import matplotlib.pyplot as plt
import numpy as np


def plot_results(track, veh, res, guess, prefix):
    i, iy = veh.i, veh.iy
    s = res["s"]
    v = res["y"][iy["vxBody"]]

    # racing line on the track map, coloured by speed
    fig, ax = plt.subplots(figsize=(10, 9))
    sb = np.linspace(0, track.length, 3000)
    left, right = track.borders(sb)
    ax.plot(left[:, 0], left[:, 1], "k-", lw=0.8)
    ax.plot(right[:, 0], right[:, 1], "k-", lw=0.8)
    c = track.xy(sb)
    ax.plot(c[:, 0], c[:, 1], "k:", lw=0.5)
    sc = ax.scatter(res["x_enu"], res["y_enu"], c=v * 3.6, s=4, cmap="turbo")
    ax.plot(*track.xy(0.0), "ko")
    fig.colorbar(sc, ax=ax, label="speed [km/h]")
    ax.set_aspect("equal")
    ax.set_title(f"{track.name}: minimum lap time {res['lap_time']:.3f} s")
    fig.savefig(prefix + "_line.png", dpi=150, bbox_inches="tight")
    plt.close(fig)

    fig, axs = plt.subplots(6, 1, figsize=(12, 15), sharex=True)
    v0 = np.hypot(guess["x"][i["VX"]], guess["x"][i["VY"]])
    axs[0].plot(guess["s"], v0 * 3.6, "0.6", label=f"initial guess ({guess['lap_time']:.2f} s)")
    axs[0].plot(s, v * 3.6, label=f"optimal ({res['lap_time']:.2f} s)")
    axs[0].set_ylabel("speed [km/h]")
    axs[0].legend()
    axs[1].plot(s, res["n"], label="n")
    axs[1].plot(s, track.w_left(s), "k--", lw=0.7)
    axs[1].plot(s, -track.w_right(s), "k--", lw=0.7)
    axs[1].set_ylabel("lateral offset n [m]\n(+ = left)")
    axs[2].plot(s, res["pedals"][0], label="drive")
    axs[2].plot(s, -res["pedals"][1], label="brake (shown negative)")
    axs[2].step(s, res["u"][2], where="post", label="steer rate cmd")
    axs[2].set_ylabel("controls [-]")
    axs[2].legend()
    axs[3].plot(s, np.degrees(res["x"][i["delta"]]))
    axs[3].set_ylabel("steer delta [deg]\n(+ = right)")
    for k, w in enumerate(("FL", "FR", "RL", "RR")):
        axs[4].plot(s, res["y"][iy[f"fz[{k + 1}]"]], label=w)
    axs[4].set_ylabel("Fz [N]")
    axs[4].legend(ncol=4)
    axs[5].plot(s, res["y"][iy["axBody"]] / 9.81, label="ax")
    axs[5].plot(s, res["y"][iy["ayBody"]] / 9.81, label="ay (+ = right)")
    axs[5].set_ylabel("accel [g]")
    axs[5].legend()
    axs[5].set_xlabel("s [m]")
    fig.savefig(prefix + "_channels.png", dpi=120, bbox_inches="tight")
    plt.close(fig)

    fig, ax = plt.subplots(figsize=(6, 6))
    ax.scatter(res["y"][iy["ayBody"]] / 9.81, res["y"][iy["axBody"]] / 9.81, c=v * 3.6, s=4, cmap="turbo")
    ax.set_xlabel("ay [g]")
    ax.set_ylabel("ax [g]")
    ax.set_aspect("equal")
    ax.grid(True)
    ax.set_title("g-g diagram")
    fig.savefig(prefix + "_gg.png", dpi=120, bbox_inches="tight")
    plt.close(fig)
