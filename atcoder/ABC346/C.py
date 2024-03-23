n, k = map(int, input().split())
l = [int(x) for x in input().split()]
seen = {}


ans = k * (k + 1) // 2

i = 1
for x in l:
    if x <= k and not seen.get(x, False):
        ans -= x
        seen[x] = True

print(ans if ans > 0 else 0)
