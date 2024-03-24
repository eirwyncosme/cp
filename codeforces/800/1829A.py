c = "codeforces"

for _ in range(int(input())):
    ans = 0
    s = input()
    for i in range(10):
        if s[i] != c[i]: ans += 1

    print(ans)
