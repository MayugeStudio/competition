N, Q = list(map(int, input().split()))
As = list(map(lambda x: int(x)-1, input().split()))

L = [0 for _ in range(N)]
log = []

c = 0

for i in range(Q):
    A = As[i]
    if A-1 >= 0:
        left = L[A-1]
    else:
        left = 0
    if A+1 < N:
        right = L[A+1]
    else:
        right = 0
    middle = L[A]

    if left == 1 and middle == 1 and right == 1:
        c += 1
    elif left == 0 and middle == 0 and right == 0:
        c += 1
    elif left == 0 and middle == 1 and right == 0:
        c -= 1
    elif left == 1 and middle == 0 and right == 1:
        c -= 1
    else:
        pass

    L[A] = not L[A]

    print(c)

