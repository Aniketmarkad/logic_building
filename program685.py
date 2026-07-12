# input Row :  5 

'''
       *                    4
     *   *                  3
    *   *   *               2
  *   *   *   *             1
*   *   *   *   *           0

'''

def Display(iRow):
    
    for i in range(1,iRow+1,1):
        print(" " * (iRow-i), end="")
        print("* "*i)
    
def main():
    print("Enter number of rows : ")
    Value1 = int(input())

    Display(Value1)

if __name__ == "__main__":
    main()