for _ in range(int(input())):
    n, f, a, b = (int(x) for x in input().split())

    l = sorted([int(x) for x in input().split()])

    prev = 0
    for x in l: 
        m = min(a * (x - prev), b)
        f -= m
        if f <= 0:
            break

        prev = x 

    if f > 0: print("YES")
    else: print("NO")
