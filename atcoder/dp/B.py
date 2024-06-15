N, K = (int(x) for x in input().split())
h = [int(x) for x in input().split()]
dp = [(1<<31) - 1] * N
dp[0] = 0

for i in range(N):
    for j in range(1, K + 1):
        try: dp[i + j] = min(dp[i + j], abs(h[i] - h[i + j]) + dp[i])
        except: break

print(dp[N - 1])
