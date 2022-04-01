from binascii import a2b_base64
from math import *
from wsgiref.handlers import read_environ

class DeltaRobot():
    # https://hypertriangle.com/~alex/delta-robot-tutorial/
    # https://www.marginallyclever.com/other/samples/fk-ik-test.html
    def __init__(self, r_base, r_endeffector, l_bicep, l_forearm):
        self.r_base = r_base
        self.r_ee = r_endeffector
        self.l_bicep = l_bicep
        self.l_forearm = l_forearm

    def forwardKinematics(self, q1, q2, q3): # q in radians
        t = self.r_base - self.r_ee

        y1 = -(t + self.l_bicep*cos(q1))
        z1 = -self.l_bicep*sin(q1)

        y2 = (t+ self.l_bicep*cos(q2))*0.5
        x2 = y2 * tan(radians(60))
        z2 = -self.l_bicep*sin(q2)

        y3 = (t+ self.l_bicep*cos(q3))*0.5
        x3 = -y3*tan(radians(60))
        z3 = -self.l_bicep*sin(q3)

        dnm = (y2-y1)*x3-(y3-y1)*x2

        w1 = y1*y1 + z1*z1
        w2 = x2*x2 + y2*y2 + z2*z2
        w3 = x3*x3 + y3*y3 + z3*z3

        a1 = (z2-z1)*(y3-y1)-(z3-z1)*(y2-y1)
        b1 = -((w2-w1)*(y3-y1)-(w3-w1)*(y2-y1))/2.0

        a2 = -(z2-z1)*x3+(z3-z1)*x2
        b2 = ((w2-w1)*x3 - (w3-w1)*x2)/2.0

        a = a1*a1 + a2*a2 + dnm*dnm
        b = 2*(a1*b1 + a2*(b2-y1*dnm) - z1*dnm*dnm)
        c = (b2-y1*dnm)*(b2-y1*dnm) + b1*b1 + dnm*dnm*(z1*z1 - self.l_forearm*self.l_forearm)
  
        d = b*b - 4.0*a*c
        if d < 0:
            print("Non-existing point")
            return -1
        else:
            z0 = -0.5*(b+sqrt(d))/a
            x0 = (a1*z0 + b1)/dnm
            y0 = (a2*z0 + b2)/dnm
            return [x0, y0, z0]

    def inverseKinematicsHelper(self, x0,y0,z0):
        y1 = -self.r_base
        y0 = y0 - self.r_ee
        a = (x0*x0 + y0*y0 + z0*z0 +self.l_bicep*self.l_bicep - self.l_forearm*self.l_forearm - y1*y1)/(2*z0)
        b = (y1-y0)/z0
        d = -(a+b*y1)*(a+b*y1)+self.l_bicep*(b*b*self.l_bicep+self.l_bicep)
        if d<0:
            print("Non-existing point")
            return -1
        else:
            yj = (y1 - a*b - sqrt(d))/(b*b + 1)
            zj = a + b*yj
            theta = atan(-zj/(y1-yj)) * 180/pi
            if yj>y1:
                theta += 180
            else:
                pass
            return theta
    
    def inverseKinematics(self, x, y, z):
        theta1 = theta2 = theta3 = 0
        theta1 = self.inverseKinematicsHelper(x,y,z)
        print("Theta 1: ", theta1)
        if theta1 != -1:
            theta2 = self.inverseKinematicsHelper(x*cos(radians(120))+y*sin(radians(120)), y*cos(radians(120))-x*sin(radians(120)), z)
            if theta2 != -1:
                theta3 = self.inverseKinematicsHelper(x*cos(radians(120))-y*sin(radians(120)), y*cos(radians(120))+x*sin(radians(120)), z)
                if theta3 != -1:
                    return [theta1, theta2, theta3]
                else:
                    print("Non-existing position")
                    return
            else:
                print("Non-existing position")
                return
        else:
            print("Non-existing position")
            return

if __name__=='__main__':
    r_base = 100
    r_ee = 50
    l_bicep = 200
    l_forearm = 400
    delta = DeltaRobot(r_base, r_ee, l_bicep, l_forearm)

    position = delta.forwardKinematics(radians(45), radians(30), radians(25))
    angles = delta.inverseKinematics(position[0],position[1],position[2])

    print(position)
    print(angles)
