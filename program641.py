def Maximum(Brr):
    iMax = Brr[0]

    for no in Brr:
        if(no > iMax):
            iMax = no

    return iMax

def main():
    print("Enter the number of elements : ")
    iLength = int(input())

    Arr = []

    print("Please enter the elements : ")

    for i in range(1,iLength+1):
        no = int(input())
        Arr.append(no)
    
    iRet = Maximum(Arr)

    print(f"Maximum element is : {iRet}")
    
if __name__ == "__main__":
    main()