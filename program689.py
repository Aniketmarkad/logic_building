class Demo:
  def __init__(self):
    print("Inside Constructor")

  def __del__(self):
     print("Inside Destructor")

def main():
  print("Inside main")
  
  obj1 = Demo()
  obj2 = Demo()

  del obj1
  del obj2

  print("End of main")

if __name__ == "__main__":
    main()