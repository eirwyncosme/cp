for _ in range(int(input())):
    l = [int(x) for x in input().split()]
    if l[0] < l[1] < l[2]: print("STAIR")
    elif l[0] < l[1] > l[2]: print("PEAK")
    else: print("NONE")
