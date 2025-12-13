T = int(input())

def case():
    N = int(input())
    S = list(map(int, input().split()))
    f = S[0]  # first
    e = S[-1] # end
    if f == e:
        return 2
    S = list(filter(lambda x: x >= f and x <= e, S))

    m = f
    c = 0
    while c < N:
        c += 1
        l = list(filter(lambda x: 2*m >= x, S))
        if len(l) == 0:
            return -1
        m = max(l)
        if m == f:
            return -1
        if m == e:
            return c + 1

    return c


results = []
for _ in range(T):
    results.append(case())

for i in range(T):
    print(results[i])

