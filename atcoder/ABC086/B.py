from math import sqrt

a, b = input().split()
c = int(a + b)

if round(sqrt(c)) == sqrt(c):
    print("Yes")
else:
    print("No")
