Q = int(input())
l = []

for _ in range(Q):
    t, a = (int(x) for x in input().split())
    if t == 1:
        l.append(a)
    else:
        print(l[-a])
