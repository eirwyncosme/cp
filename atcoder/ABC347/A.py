N, K = (int(x) for x in input().split())
l = [int(x) for x in input().split()]

r = []
for x in l:
    if x % K == 0:
        r.append(int(x / K))

r.sort()

for i in range(len(r)):
    if i:
        print(" ", end="")
    print(r[i], end="")
print()
