import numpy as np
from math import *

phi = 0.1 # roll in radians
theta = 0.2 # pitch in radians
psi = 0 # heading in radians

# ZYX rotation
zyx = np.array([[cos(theta)*cos(psi), sin(phi)*sin(theta)*cos(psi)-cos(phi)*sin(psi), cos(phi)*sin(theta)*cos(psi)+sin(phi)*sin(psi)],
                [cos(theta)*sin(psi), sin(phi)*sin(theta)*sin(psi)+cos(phi)*cos(psi), cos(phi)*sin(theta)*sin(psi)-sin(phi)*cos(psi)],
                [-sin(theta), sin(phi)*cos(theta), cos(phi)*cos(theta)]])

# XYZ rotation
xyz = np.array([[cos(theta)*cos(psi), -cos(theta)*sin(psi), sin(theta)],
                [sin(phi)*sin(theta)*cos(psi)+cos(phi)*sin(psi), cos(phi)*cos(psi)-sin(phi)*sin(theta)*sin(psi), -sin(phi)*cos(theta)],
                [sin(phi)*sin(psi)-cos(phi)*sin(theta)*cos(psi), cos(phi)*sin(theta)*sin(psi)+sin(phi)*cos(psi), cos(phi)*cos(theta)]])


# Assume a thrust vector
f = np.array([0, 0, -1])


fI = np.matmul(zyx,f)
print(fI)