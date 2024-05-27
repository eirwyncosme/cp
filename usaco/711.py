with open("crossroad.in", 'r') as f:
    input = f.readline
    N = int(input())
    d = {}
    ans = 0
    for _ in range(N):
        id, pos = (int(x) for x in input().split())
        if d.get(id, pos) != pos: ans += 1
        d[id] = pos

with open("crossroad.out", 'w') as f:
    print(ans, file=f)
