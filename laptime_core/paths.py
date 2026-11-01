"""Repository locations shared by the lap time packages."""
import os

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
FMU_PATH = os.path.join(REPO, "fmu", "AlyssaVehicle.fmu")