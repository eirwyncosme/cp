N = int(input())

from itertools import permutations
for _ in range(N):
    l = [int(x) for x in input().split()]
    if any(a * a + b * b == c * c for a, b, c in permutations(l)):
        print("YES")
    else:
        print("NO")
