
def dfs(x):
    if 子ノードがなかったら:
        return

    print(x.left)
    dfs(x.left)

    print(x.right)
    dfs(x.right)

dfs(0)
    -> dfs(1)
        -> dfs(3)
        -> dfs(4)
    -> dfs(2)
        -> dfs(5)
        -> dfs(6)


1
3
4
2
5
6
