N = int(input())
A = []
B = []
for i in range(N):
    a, b = (int(x) for x in input().split())
    A.append(a)
    B.append(b)

s = sum(A)
ans = 0

for i in range(N):
    ans = max(ans, s + B[i] - A[i])

print(ans)
