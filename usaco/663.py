minx = miny = 10
maxx = maxy = 0

with open("square.in", "r") as f:
    x1, y1, x2, y2 = (int(x) for x in f.readline().split())
    minx = min(minx, min(x1, x2))
    miny = min(miny, min(y1, y2))
    maxx = max(maxx, max(x1, x2))
    maxy = max(maxy, max(y1, y2))
    x1, y1, x2, y2 = (int(x) for x in f.readline().split())
    minx = min(minx, min(x1, x2))
    miny = min(miny, min(y1, y2))
    maxx = max(maxx, max(x1, x2))
    maxy = max(maxy, max(y1, y2))

with open("square.out", "w") as f:
    f.write(f"{max(maxx - minx, maxy - miny) ** 2}\n")
