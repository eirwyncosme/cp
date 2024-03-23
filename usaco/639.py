with open("diamond.in", "r") as f:
    n, k = (int(x) for x in f.readline().split())
    l = []
    for i in range(n):
        l.append(int(f.readline()))

m = 0
for x in l:
    t = 0
    for y in l:
        if x <= y <= x + k:
            t += 1

    m = max(m, t)

with open("diamond.out", "w") as f:
    f.write(f"{m}\n")
