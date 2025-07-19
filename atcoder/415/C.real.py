def solve() -> bool:
    N = int(input())
    S = input()
    Xs = []
    for i, c in enumerate(S, start=1):
        if c == '1':
            Xs.append(i)
    acc = 0
    ds = [2**i for i in range(N)]
    return algo(acc, Xs, ds, N)

def algo(acc, Xs, ds, N) -> bool:
    i = 0
    while i < len(ds):
        next = acc + ds[i]
        cds = ds.copy()
        cds.remove(ds[i])
        i+=1
        if next in Xs:
            continue
        if next == 2**N-1:
            return True
        if algo(next, Xs, cds, N):
            return True

    return False

T = int(input())
res = []
for i in range(T):
    if solve():
        res.append("Yes")
    else:
        res.append("No")
for r in res:
    print(r)

