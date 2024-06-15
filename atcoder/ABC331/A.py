M, D = (int(x) for x in input().split())
y, m, d = (int(x) for x in input().split())

if m == M and d == D:
    print(y + 1, 1, 1)
elif d == D:
    print(y, m + 1, 1)
else:
    print(y, m, d + 1)
