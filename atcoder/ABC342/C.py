N = int(input())
S = input()
Q = int(input())

l = "abcdefghijklmnopqrstuvwxyz"
for i in range(Q):
    c, d = (x for x in input().split())
    l = l.replace(c, d)

R = ""
for x in S:
    R += l[ord(x) - ord('a')]

print(R)
