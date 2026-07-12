class Arithematic:
  def __init__(self,A= 0,B = 0):
    self.No1 = A
    self.No2 = B

  def Addition(self):
     return self.No1 + self.No2
  
  def Substraction(self):
     return self.No1 - self.No2
  
def main():  
  obj1 = Arithematic(11,10)

  iRet = obj1.Addition()
  print(f"Addition is : {iRet}")

  iRet = obj1.Substraction()
  print(f"Substraction is : {iRet}")

if __name__ == "__main__":
    main()