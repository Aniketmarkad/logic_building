def CheckPerfect(iNo):
    iSum = 0

    for i in range(1,(iNo//2)+1):
        if(iNo % i == 0):
            iSum += i

    if(iSum == iNo):
        return True
    else:
        return False

def main():
    print("Enter number : ")
    iValue = int(input())

    bRet = CheckPerfect(iValue)

    if(bRet == True):
        print(f"{iValue} is perfect number")
    else:
        print(f"{iValue} is not a perfect number")

if __name__ == "__main__":
    main()