# input Row :  5 

'''
*   *   *   *   *           0
  *   *   *   *             1
    *   *   *               2
      *   *                 3
        *                   4
  '''

def Display(iRow):
    
    for i in range(iRow,0,-1):
        print(" " * (iRow-i), end="")
        print("* "*i)
    
def main():
    print("Enter number of rows : ")
    Value1 = int(input())

    Display(Value1)

if __name__ == "__main__":
    main()