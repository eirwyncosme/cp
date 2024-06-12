S = [input(), input(), input()]

p = 'a'
while True:
    i = ord(p) - ord('a')
    if S[i] == "": break

    p = S[i][0]
    S[i] = S[i][1:]


print(p.upper())
