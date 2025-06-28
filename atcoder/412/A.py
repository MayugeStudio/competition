N = int(input())
c = 0
A = [0] * N
B = [0] * N
for i in range(N):
    A[i], B[i] = list(map(int, input().split()))

for i in range(N):
    if A[i] < B[i]:
        c += 1

print(c)
