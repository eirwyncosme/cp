N, M = (int(x) for x in input().split())
H = [int(x) for x in input().split()]

ans = 0
for x in H:
    if x > M: break
    ans += 1
    M -= x

print(ans)
