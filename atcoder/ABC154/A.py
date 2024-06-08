d = {}
a, b = input().split()
c, de = (int(x) for x in input().split())
d[a] = c
d[b] = de
d[input()] -= 1

print(d[a], d[b])
