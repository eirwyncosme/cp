for _ in range(int(input())):
    n = int(input())
    s1 = input()
    s2 = input()

    add = 0
    rem = 0
    for i in range(n):
        if s1[i] > s2[i]: rem += 1
        elif s2[i] > s1[i]: add += 1

    print(max(add, rem))
