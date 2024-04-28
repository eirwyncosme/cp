N, Q = (int(x) for x in input().split())
T = [int(x) for x in input().split()]
O = [0] * N

for i in T:
    O[i - 1] = int(not O[i - 1])

print(O.count(0))
