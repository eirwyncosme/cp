N = int(input())
D = [int(x) for x in input().split()]

ans = 0
for i in range(N):
    m = str(i + 1)
    for j in range(D[i]):
        d = str(j + 1)
        if set(m) == set(d) and len(set(m)) == 1:
            ans += 1

print(ans)
