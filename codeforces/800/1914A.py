for _ in range(int(input())):
    input()
    s = input()
    ans = 0

    for x in set(s):
        if s.count(x) >= ord(x) - ord('A') + 1:
            ans += 1

    print(ans)
