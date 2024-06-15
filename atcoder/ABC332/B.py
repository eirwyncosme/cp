K, G, M = (int(x) for x in input().split())
g = m = 0

for i in range(K):
    if g == G:
        g = 0
    elif m == 0:
        m = M
    else:
        g += m
        m = 0
        if g > G:
            m += (g - G)
            g -= (g - G)

print(g, m)
