cases = int(input())

for _ in range(cases):
    rating = int(input())
    print("Division ", end="")

    if rating <= 1399: print(4)
    elif rating <= 1599: print(3)
    elif rating <= 1899: print(2)
    else: print(1)
