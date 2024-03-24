for _ in range(int(input())):
    p1 = tuple(int(x) for x in input().split())
    for __ in range(3):
        x = tuple(int(x) for x in input().split())
        if p1[0] != x[0] and p1[1] != x[1]:
            p2 = x

    print(abs(p1[0] - p2[0]) * abs(p1[1] - p2[1]))
