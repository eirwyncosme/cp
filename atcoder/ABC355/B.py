N, M = (int(x) for x in input().split())
A = [int(x) for x in input().split()]
B = [int(x) for x in input().split()]

A.sort()
for i in range(N - 1):
    if A[i] + 1 == A[i + 1] or all(x not in B for x in range(A[i] + 1, A[i + 1])):
        print("Yes")
        from sys import exit
        exit(0)
print("No")

