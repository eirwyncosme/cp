with open("paint.in", "r") as f:
    a, b = (int(x) for x in f.readline().split())
    c, d = (int(x) for x in f.readline().split())

l1 = list(range(a, b))
l2 = list(range(c, d))

ans = b - a + d - c
for x in l1:
    ans -= x in l2

with open("paint.out", "w") as f:
    print(ans, file=f)
