N, L, R = (int(x) for x in input().split())
A = [int(x) for x in input().split()]

for x in A:
    if L <= x <= R:
        print(x, end=" ")
    elif x < L:
        print(L, end=" ")
    else:
        print(R, end=" ")
print()
