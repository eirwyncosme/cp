N = int(input())
d = {}
for _ in range(N):
    t, x, y = map(int, input().split())
    d[t] = (x, y)

y = True
pos = (0, 0)
last = 0
for k, v in d.items():
    d = abs(v[0] - pos[0]) + abs(v[1] - pos[1])
    t = k - last

    if d <= t and t % 2 == d % 2:
        last = k
        pos = v
        continue

    y = False
    break
    
print("Yes" if y else "No")
