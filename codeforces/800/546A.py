k, n, w = (int(x) for x in input().split())

i = 0
for _ in range(1, w + 1):
    i += _ * k

if i > n:
    print(i - n)
else:
    print(0)
