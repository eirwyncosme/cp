S = input()
c = 0
for x in S:
    p = ord(x) - ord('A')
    if p >= c and p < 3 and c < 3:
        c = p
    else:
        print("No")
        from sys import exit
        exit(0)
print("Yes")
