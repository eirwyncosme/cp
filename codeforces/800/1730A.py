from collections import Counter

for _ in range(int(input())):
    n, c = map(int, input().split())

    k = Counter([int(x) for x in input().split()])

    ans = 0
    for _, v in k.items():
        if v > c: ans += c
        else: ans += v

    print(ans)
        
