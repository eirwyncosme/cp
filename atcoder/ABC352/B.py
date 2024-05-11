S = input()
T = input()

c = 0

for i in range(len(T)):
    if T[i] == S[c]:
        if c:
            print(" ", end="")
        print(i + 1, end="")
        c += 1
print()
