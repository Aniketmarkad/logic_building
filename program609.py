def CheckEvenOdd(No):
    if(No % 2 == 0):
        return True
    else:
        return False

def main():
    print("Enter number : ")
    Value = int(input())

    bRet = CheckEvenOdd(Value)

    if(bRet == True):
        print(f"{Value} is even number")
    else:
        print(f"{Value} is odd number")

if __name__ == "__main__":
    main()