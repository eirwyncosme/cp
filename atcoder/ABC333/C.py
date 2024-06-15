# Editorial

N = int(input())
l = [int("1" * i) for i in range(1, 13)]
s = set()

for x in l:
    for y in l:
        for z in l:
            s.add(x + y + z)

print(sorted(s)[N - 1])
