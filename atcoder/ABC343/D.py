N, T = (int(x) for x in input().split())
d = { 0: N }
l = [0] * N
diversity = 1

for i in range(T):
    A, B = (int(x) for x in input().split())
    d[l[A - 1]] -= 1
    if d[l[A - 1]] == 0:
        diversity -= 1

    l[A - 1] += B

    if d.get(l[A - 1], 0) == 0:
        diversity += 1

    d[l[A - 1]] = d.get(l[A - 1], 0) + 1

    print(diversity)
