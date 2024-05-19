S = input().upper()
T = input()

i = 0
sub = 0
for x in T:
    while S[i] != x:
        i += 1
        if i == len(S): break

    if i != len(S): sub += 1
    i += 1

    if i >= len(S): break

if sub == 3 or (sub == 2 and T[-1] == 'X'):
    print("Yes")
else:
    print("No")

