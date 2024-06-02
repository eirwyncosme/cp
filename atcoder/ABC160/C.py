K, N = (int(x) for x in input().split())
A = [int(x) for x in input().split()]
D = [0] * N
for i in range(N - 1):
    D[i] = A[i + 1] - A[i]
D[N - 1] = A[0] + K - A[-1]
print(sum(D) - max(D))
