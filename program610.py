def CheckDivisible(No):
    if((No % 3 == 0) and (No % 5 == 0)):
        return True
    else:
        return False

def main():
    print("Enter number : ")
    Value = int(input())

    bRet = CheckDivisible(Value)

    if(bRet == True):
        print(f"{Value} is divisble by 3 & 5")
    else:
        print(f"{Value} is not divisble by 3 &(or) 5")

if __name__ == "__main__":
    main()