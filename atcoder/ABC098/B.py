N = int(input())
S = input()
ans = 0
for i in range(N):
    c = 0
    for x in set(S[i:]):
        c += x in S[:i]
    ans = max(ans, c)
print(ans)
