N, X, Y, Z = (int(x) for x in input().split())

if X < Y and X <= Z <= Y or X > Y and X >= Z >= Y:
    print("Yes")
else:
    print("No")
