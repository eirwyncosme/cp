N, M  = (int(x) for x in input().split())
A = [int(x) for x in input().split()]
T = [0] * M

for _ in range(N):
    X = [int(x) for x in input().split()]
    for i in range(M):
        T[i] += X[i]

for i in range(M):
    if T[i] < A[i]:
        print("No")
        from sys import exit
        exit(0)

print("Yes")
