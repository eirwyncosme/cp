from string import ascii_lowercase, ascii_uppercase

S = input()

lower = len([x for x in S if x in ascii_lowercase])
upper = len([x for x in S if x in ascii_uppercase])

R = ""

for i in range(len(S)):
    if upper > lower and S[i] in ascii_lowercase:
        R += ascii_uppercase[ascii_lowercase.find(S[i])]
    elif lower >= upper and S[i] in ascii_uppercase:
        R += ascii_lowercase[ascii_uppercase.find(S[i])]
    else:
        R += S[i]

print(R)
