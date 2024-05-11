S = input()

d1 = dict()
d2 = dict()

for x in S:
    d1[x] = d1.get(x, 0) + 1

for _, v in d1.items():
    d2[v] = d2.get(v, 0) + 1

if any(v != 2 for _, v in d2.items()):
    print("No")
else:
    print("Yes")
