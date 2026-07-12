def Reverse(iNo):
    iRev = 0
    iDigit = 0

    while(iNo != 0):
        iDigit = iNo % 10
        iRev = iRev * 10 + iDigit
        iNo = iNo // 10
    
    return iRev

def main():
    print("Enter number : ")
    iValue = int(input())

    iRet = Reverse(iValue)

    print(f"Reverse number of {iValue} is {iRet}")

if __name__ == "__main__":
    main()