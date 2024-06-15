N, S, K = (int(x) for x in input().split())
ans = 0
for i in range(N):
    P, Q = (int(x) for x in input().split())
    ans += P * Q

ans += K if ans < S else 0
print(ans)
