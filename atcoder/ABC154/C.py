input()
A = (int(x) for x in input().split())
d = {}
for x in A:
    if d.get(x, 0):
        print("NO")
        from sys import exit
        exit(0)
    d[x] = 1
print("YES")
