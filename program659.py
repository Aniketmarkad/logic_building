def CountNonVowels(data):
    iCount = 0

    pattern = "aeiouAEIOU"

    for ch in data:
        if(ch in pattern):
            iCount += 1

    return len(data) - iCount

def main():
    print("Enter string : ")
    str = input()

    iRet = CountNonVowels(str)

    print(f"Frequency of vowels in {str} is {iRet}")

if __name__ == "__main__":
    main()