N = int(input())
D = list(map(int, input().split()))
S = []

for x in range(len(D)):
    S.append([D[x]])
    c = 0
    for i in range(x, len(D)-1):
        S[x].append(S[x][c] + D[i+1])
        c += 1

for i in range(len(S)):
    print(" ".join(list(map(str, S[i]))))

