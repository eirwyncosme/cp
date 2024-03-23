with open("gymnastics.in", "r") as f:
    k, n = (int(x) for x in f.readline().split())

    l = []
    for _ in range(k):
        l.append([int(x) for x in f.readline().split()]) 

ans = 0
for i in range(1, n + 1):
    for j in range(1, n + 1):
        if i == j: continue

        b = True
        for p in l:
            if p.index(i) > p.index(j): b = False

        ans += 1 if b else 0

with open("gymnastics.out", "w") as f:
    f.write(f"{ans}\n")
