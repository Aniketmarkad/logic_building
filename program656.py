def CountVowels(data):
    iCount = 0

    for ch in data:
        if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u'):
            iCount += 1

    return iCount

def main():
    print("Enter string : ")
    str = input()

    iRet = CountVowels(str)

    print(f"Frequency of vowels in {str} is {iRet}")

if __name__ == "__main__":
    main()