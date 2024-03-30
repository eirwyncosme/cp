for _ in range(int(input())):
    h, m = (int(x) for x in input().split(":"))
    suf = "AM" if h < 12 else "PM"

    if h == 0:
        h = 12

    if h > 12:
        h %= 12
    print(f"{h:02}:{m:02} {suf}")
