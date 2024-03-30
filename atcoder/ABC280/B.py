N = int(input())
l = [int(x) for x in input().split()]

last = 0
for i in range(N):
    if i: print(" ", end="")
    print(l[i] - last, end="")
    last = l[i]

print()
