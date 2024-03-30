from datetime import datetime as dt

start = dt(2011, 11, 11, 11, 11)

with open("ctiming.in", "r") as f:
    D, H, M = (int(x) for x in f.readline().split())

end = dt(2011, 11, D, H, M)

d = end - start;

with open("ctiming.out", "w") as f:
    f.write(f"{int(d.total_seconds() / 60) if d.total_seconds() >= 0 else -1}\n")
