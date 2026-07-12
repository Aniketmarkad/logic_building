# Input : 721
#   10

def SumDigits(No):
    iDigit = 0
    iSum = 0

    while(No != 0):
        iDigit = No % 10
        iSum = iSum + iDigit
        No = No // 10
        
    return iSum

def main():

    print("Enter number : ")
    Value = int(input())

    iRet = SumDigits(Value)

    print(f"Summation of digits {iRet}")
    
if __name__ == "__main__":
    main()