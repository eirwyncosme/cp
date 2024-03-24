pi = "314159265358979323846264338327"
for _ in range(int(input())):
    s = input()

    ans = 0
    for x in s:
        if x != pi[ans]: break
        ans += 1

    print(ans)
