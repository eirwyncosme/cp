S = input()
N = len(S)

l = ['A', 'C', 'G', 'T']
ans = 0
for i in range(N):
    for j in range(i, N + 1):
        if all(x in l for x in S[i:j]):
            ans = max(ans, j - i)
print(ans)
