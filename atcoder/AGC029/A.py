S = input()
ans = 0

c = 0
for i in range(len(S)):
    if S[i] == 'W':
        ans += i - c
        c += 1

print(ans)
