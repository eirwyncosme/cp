n = int(input())
l = [int(x) for x in input().split()]

ans = 0
for i in range(n):
    for j in range(i + 1, n + 1):
        if sum(l[i:j]) / (j - i) in l[i:j]:
            ans += 1

print(ans)
