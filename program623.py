def Factorial(No):
    iFact = 1

    for i in range(1,No+1):
        iFact = iFact * i

    return iFact
    
def main():

    print("Enter number : ")
    Value = int(input())

    iRet = Factorial(Value)

    print(f"Factorial is : {iRet}")

if __name__ == "__main__":
    main()