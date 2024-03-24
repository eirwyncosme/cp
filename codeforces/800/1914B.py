for _ in range(int(input())):
    n, k = (int(x) for x in input().split())
    l = list(reversed(range(1, n + 1)))

    l = l[:n - k - 1] + l[n - k - 1:][::-1]

    for i in range(n):
        if i > 0: print(" ", end="")
        print(l[i], end="")
    print()
