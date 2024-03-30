S = input()

r = set()

for i in range(len(S) + 1):
    for j in range(i, len(S) + 1):
        r.add(S[i:j])

print(len(r) - 1)
