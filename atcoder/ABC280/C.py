S = input()
T = input()

found = False
for i in range(min(len(S), len(T))):
    if S[i] != T[i]:
        print(i + 1)
        found = True
        break

if not found:
    print(len(S) + 1)
