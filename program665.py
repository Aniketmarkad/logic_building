def StrUpr(data):
    output = ""
    i = 0
     
    for ch in data:
        if(ch >= 'a' and ch <= 'z'):
            output = output + (ch - 32)     # Error
        else:
            output = output + ch

    return output

def main():
    print("Enter string : ")
    str = input()

    strx = StrUpr(str)

    print(f"Updated string is {strx}")

if __name__ == "__main__":
    main()