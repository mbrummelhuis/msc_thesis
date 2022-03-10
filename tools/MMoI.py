"""
Quick script to estimate effect of moving masses on the mass moment of inertia (MMoI) of the aerial manipulation system.
Idea: Model system as a collection of known shapes at a distance from O
Unit: [kg*m^2]
""" 
m_rmotor = 0.04 # Weight of a single rotor motor in kg
m_arm = 0.03 # Weight of one rotor arm in kg
d_arm = 0.2 # Length of one of the rotor arms (from the CoM) in meters


rmotors_z = 4 * m_rmotor * d_arm ** 2
rarms_z = 4 * m_arm * (0.5* d_arm) ** 2



