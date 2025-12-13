N = int(input())

A = list(map(int, input().split()))
X = int(input())

for a in A:
    if a == X:
        print("Yes");
        exit()

print("No")

