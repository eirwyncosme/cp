for i in range(int(input())):
    n, m, k = (int(x) for x in input().split())
    a = [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]
    c = [0] * k
 
    for x in a:
        if x <= k:
            c[x - 1] |= 1
 
    for x in b:
        if x <= k:
            c[x - 1] |= 2
 
    oa = ob = both = 0
    for x in c:
        if x == 3: both += 1
        elif x == 1: oa += 1
        elif x == 2: ob += 1
 
    if oa > k / 2 or ob > k / 2 or oa + ob + both < k:
        print("NO")
    else:
        print("YES")
