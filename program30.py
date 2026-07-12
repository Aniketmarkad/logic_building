def Factorial(iNo):
    iFact = 1

    for i in range(1,iNo+1):
        iFact = iFact * i

    return iFact

def main():
    print("Enter number : ")
    iValue = int(input())

    iRet = Factorial(iValue)

    print("Factorial is : ",iRet)

if __name__ == "__main__":
    main()