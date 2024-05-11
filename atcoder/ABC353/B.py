N, K = (int(x) for x in input().split())
A = [int(x) for x in input().split()]

ans = 0
p = 0
for x in A:
    p += x
    if p > K:
        p = x
        ans += 1


print(ans + 1)
