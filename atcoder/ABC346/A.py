n = int(input())
l = [int(x) for x in input().split()]
for i in range(n - 1):
    if i: print(" ", end="")
    print(l[i] * l[i + 1], end="")

print()
