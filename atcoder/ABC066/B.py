S = input()

c = 0
while True:
    c += 2
    T = S[:-c]
    l = len(T) // 2
    if T[:l] == T[l:]:
        break

print(len(S) - c)
