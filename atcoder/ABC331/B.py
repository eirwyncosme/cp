N, S, M, L = (int(x) for x in input().split())

ans = 1000000000
for i in range(101):
    for j in range(101):
        for k in range(101):
            if i * 6 + j * 8 + k * 12 >= N:
                ans = min(ans, i * S + j * M + k * L)

print(ans)

