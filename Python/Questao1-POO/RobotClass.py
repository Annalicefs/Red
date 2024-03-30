#Classe Robot
class Robot:
  def __init__(self):
    self.xPos = 0
    self.yPos = 0
    self.theta = 0
    self.L = 7.5
    self.R = 3.5

  def get_xPos(self): #xPos
    return self.xPos

  def set_xPos(self, x):
    self.xPos = x

  def get_yPos(self): #yPos
    return self.yPos

  def set_yPos(self, y):
    self.yPos = y

  def get_theta(self):  #theta
    return self.theta

  def set_theta(self, theta):
    self.theta = theta

  def get_L(self):  #L
    return self.L

  def set_L(self, valorL):
    self.L = valorL

  def get_R(self):  #R
    return self.R

  def set_R(self, valorR):
    self.R = valorR

  def setPose(self, x, y, theta):
    self.xPos = x
    self.yPos = y
    self.theta = theta