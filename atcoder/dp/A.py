N = int(input())
h = [int(x) for x in input().split()]
dp = [(1<<31) - 1] * N
dp[0] = 0

for i in range(N):
    try: dp[i + 1] = min(dp[i + 1], abs(h[i] - h[i + 1]) + dp[i])
    except: pass
    try:dp[i + 2] = min(dp[i + 2], abs(h[i] - h[i + 2]) + dp[i])
    except: pass

print(dp[N - 1])
