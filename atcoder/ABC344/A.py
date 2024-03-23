s = input()

l = None
r = None
for i in range(len(s)):
    if s[i] == '|' and l == None: l = i
    elif s[i] == '|' and l != None: r = i

print(s[:l] + s[r + 1:])
