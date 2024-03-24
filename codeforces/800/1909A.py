for _ in range(int(input())):
    n = int(input())
    r = []
    l = []
    t = []
    b = []
    for __ in range(n):
        x, y = (int(x) for x in input().split())
        r.append(x >= 0)
        l.append(x <= 0)
        t.append(y >= 0)
        b.append(y <= 0)
    
    if all(r) or all(l) or all(t) or all(b):
        print("YES")
    else:
        print("NO")
