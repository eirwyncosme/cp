m = int(input())
stars = []
for i in range(m):
    stars.append(tuple(int(x) for x in input().split()))

stars.sort()
diffs = []
for i in range(1, m):
    diffs.append((stars[i][0] - stars[0][0], stars[i][1] - stars[0][1]))

n = int(input())

xs = []
for i in range(n):
    xs.append(tuple(int(x) for x in input().split()))   


for i in range(n):
    c = xs[i]
    b = False
    for x in diffs:
        t = (c[0] + x[0], c[1] + x[1])
        if t not in xs:
            b = True
            break
    if not b:
        print(c[0] - stars[0][0], c[1] - stars[0][1])
        
