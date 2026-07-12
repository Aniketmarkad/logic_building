class Node:
    def __init__(self,No):
      self.Data = No
      self.next = None

class SinglyLL:

###########################################################################  
  def __init__(self):
    self.First = None
    self.iCount = 0

###########################################################################
  def InsertFirst(self, No):
    newn = Node(No)

    if(self.First == None):   # LL is empty
      self.First = newn
    else:                     # LL contains atleast 1 node
      newn.next = self.First
      self.First = newn

    self.iCount = self.iCount + 1

###########################################################################
  
  def InsertLast(self, No):
    newn = Node(No)

    if(self.First == None):   # LL is empty
      self.First = newn
    else:                     # LL contains atleast 1 node
      temp = self.First

      while(temp.next != None):
        temp = temp.next

      temp.next = newn

    self.iCount = self.iCount + 1

###########################################################################

  def Display(self):
    temp = self.First

    while(temp != None):
      print(f"| {temp.Data} | -> ", end="")
      temp = temp.next

    print("None")
     
###########################################################################

  def Count(self):
     return self.iCount
###########################################################################

  def DeleteFirst(self):
    if(self.First == None):
      return
    else:
      temp = self.First
      self.First = self.First.next
      del temp

      self.iCount = self.iCount-1

###########################################################################

def main():
  print("Demonstration of Singly Linear Linked List")

  sobj = SinglyLL()

  sobj.InsertFirst(51)
  sobj.InsertFirst(21)
  sobj.InsertFirst(11)
  
  sobj.Display()

  iRet = sobj.Count()
  print(f"Number of nodes on Linked List are {iRet}")
  
  sobj.InsertLast(101)
  sobj.InsertLast(111)
  sobj.InsertLast(121)
  
  sobj.Display()

  iRet = sobj.Count()
  print(f"Number of nodes on Linked List are {iRet}")

  sobj.DeleteFirst()
  
  sobj.Display()

  iRet = sobj.Count()
  print(f"Number of nodes on Linked List are {iRet}")

###########################################################################

if __name__ == "__main__":
    main()

###########################################################################
