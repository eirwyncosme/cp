X = [int(x) for x in list(input())]

if all(X[0] == y for y in X) or all((X[i] + 1) % 10 == X[i + 1] % 10 for i in range(3)):
    print("Weak")
else:
    print("Strong")

