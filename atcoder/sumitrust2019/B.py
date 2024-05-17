from math import floor
from sys import exit
N = int(input())

for i in range(1, 500001):
    if floor(1.08 * i) == N:
        print(i)
        exit(0)
print(":(")
