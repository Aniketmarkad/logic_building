def CountEvenDigits(iNo):
    iCount = 0
    iDigit = 0

    while(iNo != 0):
        iDigit = iNo % 10
        if(iDigit % 2 == 0):
            iCount = iCount + 1
        iNo = iNo // 10

    return iCount

def main():
    print("Enter number : ")
    iValue = int(input())

    iRet = 0
    iRet = CountEvenDigits(iValue)

    print(f"Number of even digits in {iValue} are : {iRet}")

if __name__ == "__main__":
    main()