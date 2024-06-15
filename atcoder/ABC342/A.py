S = input()
d = {}
for x in S:
    d[x] = d.get(x, 0) + 1

for k, v in d.items():
    if v == 1:
        print(S.index(k) + 1)
