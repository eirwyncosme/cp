N = int(input())
A = [int(x) for x in input().split()]

ans = -1
for i in range(1, N):
    if A[i] > A[0]:
        ans = i + 1
        break

print(ans)
