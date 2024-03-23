for _ in range(int(input())):
    n = int(input())
    l = [int(x) for x in input().split()]

    for i in range(63):
        if len(set(x % (2 << i) for x in l)) == 2:
            print(2 << i)
            break
