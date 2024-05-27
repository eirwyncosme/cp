N, D = (int(x) for x in input().split())
A = []
for i in range(N):
    A.append([int(x) for x in input().split()])

from math import sqrt
ans = 0
for i in range(N):
    for j in range(i + 1, N):
        d = 0
        y = A[i]
        z = A[j]
        for k in range(D):
            d += (y[k] - z[k])**2
        d = sqrt(d)

        if d == int(d):
            ans += 1
print(ans)
