input()
A = [int(x) for x in input().split()]
print(A.index(sorted(A)[-2]) + 1)
