S = input()
c = [0] * 26
for x in S:
    c[ord(x) - ord('a')] += 1

m = 0
mpos = 0
for i in range(26):
    if c[i] > m:
        mpos = i
        m = c[i]
print(chr(mpos + ord('a')))
