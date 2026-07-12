def Display(No):

    i = 1

    for i in range(1,No+1):
        print("*",end="\t")
    
    print("")
    
def main():

    print("Enter number : ")
    Value = int(input())

    Display(Value)

if __name__ == "__main__":
    main()