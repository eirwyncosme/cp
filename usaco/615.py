with open("pails.in", "r") as f:
    x, y, m = (int(x) for x in f.readline().split())


ma = 0
for i in range(m // y + 1):
    for j in range(m // x + 1):
        if i * y + j * x <= m:
            ma = max(ma, i * y + j * x)

with open("pails.out", "w") as f:
    f.write(f"{ma}\n")
