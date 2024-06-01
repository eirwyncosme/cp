N, L, R = (int(x) for x in input().split())
A = list(range(1, N + 1))
L -= 1

REV = list(reversed(A[L:R]))
gone = False

for i in range(L):
    if i: print(" ", end="")
    print(A[i], end="")
    gone = True

for i in range(R - L):
    if gone: print(" ", end="")
    print(REV[i], end="")
    if not gone: gone = True

for i in range(N - R):
    print(" ", end="")
    print(A[i + R], end="")
print()
