road = [0] * 100
travel = [0] * 100

with open("speeding.in", "r") as f:
    input = f.readline
    N, M = (int(x) for x in input().split())

    pos = 0
    for _ in range(N):
        a, b = (int(x) for x in input().split())
        for __ in range(a):
            road[pos] = b
            pos += 1

    pos = 0
    for _ in range(M):
        a, b = (int(x) for x in input().split())
        for __ in range(a):
            travel[pos] = b
            pos += 1

ans = 0
for i in range(100):
    ans = max(ans, travel[i] - road[i])

with open("speeding.out", "w") as f:
    print(ans, file=f)
