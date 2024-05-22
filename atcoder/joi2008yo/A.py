N = 1000 - int(input())

l = [500, 100, 50, 10, 5, 1]
c = 0
ans = 0
while N:
    if l[c] > N:
        c += 1
        continue

    N -= l[c]
    ans += 1

print(ans)
