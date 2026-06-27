S = input()
T = input()

# Search uppercase
def main(s):
    for i in range(len(s)):
        if s[i].isupper() and i != 0:
            if s[i-1] not in T:
                print("No")
                return

    print("Yes")

main(S)
