N, M, C = (int(x) for x in input().split())
B = [int(x) for x in input().split()]

ans = 0
for _ in range(N):
    A = [int(x) for x in input().split()]

    c = 0
    for i in range(M):
        c += A[i] * B[i]
    
    ans += c + C > 0
print(ans)
