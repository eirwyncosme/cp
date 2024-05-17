from math import ceil

H, W = (int(x) for x in input().split())
if H == 1 or W == 1: print(1)
else:print(ceil(H * W / 2))
