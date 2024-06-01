N = int(input())
A = []
for i in range(N):
    l, r = (int(x) for x in input().split())   
    A.append((l, 'l'))
    A.append((r, 'r'))

A.sort()

ans = 0
cnt = 0
for x in A:
    if x[1] == 'r':
        ans += cnt - 1
        cnt -= 1
    else:
        cnt += 1

print(ans)
