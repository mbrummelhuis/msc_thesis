"""
Quick script to estimate effect of moving masses on the mass moment of inertia (MMoI) of the aerial manipulation system.
Idea: Model system as a collection of known shapes at a distance from O
Unit: [kg*m^2]
""" 


class Part():
    def __init__(self, number, mass, type, dx, dy, dz, radius = 0, length = 0, width = 0, height = 0):
        self.mass = mass
        self.number = number
        self.type = type  # type cylinder, beam, sphere
        self.dx = dx # X distance to O in m
        self.dy = dy # Y distance to O in m
        self.dz = dz # Z distance to O in m

        self.radius = radius # Radius of disc/sphere
        self.length = length # Length of beam/cylinder (along x)
        self.width = width  # Width of beam (along y)
        self.height = height # Height of beam (along z)

    def calculateMMOI(self):
        # About own axes
        if self.type == 'cylinder':
            Ixx = 0.25 * self.mass * self.radius**2
            Iyy = Ixx
            Izz = 0.50 * self.mass * self.radius**2
        
        if self.type == 'beam':
            Ixx = 1./12. * self.mass * (self.width ** 2 + self.height ** 2)
            Iyy = 1./12. * self.mass * (self.length ** 2 + self.height ** 2)
            Izz = 1./12. * self.mass * (self.length ** 2 + self.width ** 2)
        
        else:
            Ixx = 0.0
            Iyy = 0.0
            Izz = 0.0

        # Parallel axes theorem    
        self.Ixx = self.number * (Ixx + self.mass * self.dx ** 2)
        self.Iyy = self.number * (Iyy + self.mass * self.dy ** 2)
        self.Izz = self.number * (Izz + self.mass * self.dz ** 2)

if __name__=="__main__":
    motor = Part(4, 0.04, 'cylinder', 0.25, 0.25, 0, 0.01)
    body = Part(1, 0.7, 'beam', 0.1, 0.15, 0, 0, 0.2, 0.2, 0.2)
    arm = Part(4, 0.03, 'beam', 0.15, 0.15, 0, 0 , 0.3, 0.05, 0.05)
    manipulator = Part(1, 0.1, 'beam', 0.4, 0, 0, 0, 0.6, 0.05, 0.05)

    links = [motor, body, arm, manipulator]
    total_MMOI = [0.0, 0.0, 0.0]

    for link in links:
        link.calculateMMOI()
        total_MMOI[0] += link.Ixx
        total_MMOI[1] += link.Iyy
        total_MMOI[2] += link.Izz
    
    print(total_MMOI)







