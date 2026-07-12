def ReverseArray(Brr):
    i = 0

    for i in range(len(Brr)-1,-1,-1):
        print(Brr[i])

def main():
    print("Enter the number of elements : ")
    iLength = int(input())

    Arr = []

    print("Please enter the elements : ")

    for i in range(1,iLength+1):
        no = int(input())
        Arr.append(no)
    
    ReverseArray(Arr)
    
if __name__ == "__main__":
    main()