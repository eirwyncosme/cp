for _ in range(int(input())):
    s = input()

    a, b = None, None
    for i in range(1, len(s) // 2 + 1):
        c = int(s[:i])
        d = int(s[i:])
        if c < d and s[i] != '0' and c > 0:
            a, b = c, d    
            break

    if a and b: print(a, b)
    else: print(-1)
