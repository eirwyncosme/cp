N = int(input())

A = [0] * (N + 1)
B = [0] * (N + 1)
C = [0] * (N + 1)


for i in range(1, N + 1):
    a, b, c = (int(x) for x in input().split())
    A[i] = max(B[i - 1] + b, C[i - 1] + c)
    B[i] = max(A[i - 1] + a, C[i - 1] + c)
    C[i] = max(A[i - 1] + a, B[i - 1] + b)
print(max(A[N], max(B[N], C[N])))
