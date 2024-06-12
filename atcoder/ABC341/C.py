H, W, N = (int(ch) for ch in input().split())
T = input()

G = []
for i in range(H):
    G.append(input())

ans = 0
for i in range(H):
    for j in range(W):
        if G[i][j] == '#': continue

        ok = True
        y = i
        x = j
        for ch in T:
            match ch:
                case 'L':
                    x -= 1
                case 'R':
                    x += 1
                case 'U':
                    y -= 1
                case 'D':
                    y += 1
            if not (y >= 0 and y < H and x >= 0 and x < W and G[y][x] == '.'):
                ok = False
                break
        ans += ok

print(ans)
