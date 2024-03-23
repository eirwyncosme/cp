for _ in range(int(input())):
    l = []
    r = []
    b = []
    for __ in range(int(input())):
        t, s = input().split()
        if s == "10": l.append(int(t))
        elif s == "01": r.append(int(t))
        elif s == "11": b.append(int(t))

    ans = 2 * 10e5 + 1
    try: ans = min(b)
    except ValueError: pass

    try: ans = min(ans, min(l) + min(r))
    except ValueError: pass

    print(-1 if ans == 2 * 10e5 + 1 else ans)
