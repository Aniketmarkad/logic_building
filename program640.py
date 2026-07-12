
def Addition(Brr):
    iSum = 0

    for no in Brr:
        iSum += no

    return iSum

def main():
    print("Enter the number of elements : ")
    iLength = int(input())

    Arr = []

    print("Please enter the elements : ")

    for i in range(1,iLength+1):
        no = int(input())
        Arr.append(no)
    
    iRet = Addition(Arr)

    print(f"Addition of all elements : {iRet}")
    
if __name__ == "__main__":
    main()