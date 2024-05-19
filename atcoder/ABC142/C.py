N = int(input())
A = [int(x) for x in input().split()]

B = [0] * N
for i in range(N):
    B[A[i] - 1] = i + 1

for i in range(N):
    if i: print(" ", end="")
    print(B[i], end="")
print()
