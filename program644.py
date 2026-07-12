def CountEvenOdd(Brr):
    iEven = 0

    for no in Brr:
        if(no % 2 == 0):
            iEven +=1

    return iEven, len(Brr)-iEven

def main():
    print("Enter the number of elements : ")
    iLength = int(input())

    Arr = []

    print("Please enter the elements : ")

    for i in range(1,iLength+1):
        no = int(input())
        Arr.append(no)
    
    iRet1, iRet2 = CountEvenOdd(Arr)

    print(f"Number of even elemnts : {iRet1} & Odd elemnts : {iRet2}")
    
if __name__ == "__main__":
    main()