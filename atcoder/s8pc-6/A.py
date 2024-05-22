N, T = (int(x) for x in input().split())
A = [int(x) for x in input().split()]
from math import ceil
print(ceil(sum(A) / T))
