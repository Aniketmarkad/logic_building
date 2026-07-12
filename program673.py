# input 4
#           -4    -3  -2  -1    0   1   2   3   4

def Display(iNo):
    for i in range(-iNo, iNo+1, 1):
        print(i,end="\t")

    print()
    
def main():
    print("Enter the value : ")
    iValue = int(input())

    Display(iValue)

if __name__ == "__main__":
    main()