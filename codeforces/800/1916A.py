from operator import mul
from functools import reduce

for _ in range(int(input())):
    n, k = map(int, input().split())
    b = [int(x) for x in input().split()]

    p = reduce(mul, b) 

    if 2023 % p:
        print("NO")
    else:
        print("YES")
        print(int(2023 / p), end="")
        for i in range(k - 1):
            print("", 1, end="")
        print()
