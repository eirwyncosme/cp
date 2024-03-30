for _ in range(int(input())):
    n = int(input())

    for i in range(n):
        start = i % 2
        for __ in range(2):
            for j in range(n):
                print("##" if (start + j) % 2 == 0 else "..", end="")
            print()
