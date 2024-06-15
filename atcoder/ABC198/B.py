N = input()
l = len(N)

for i in range(l):
    s = '0' * i + N
    if s == s[::-1]:
        print("Yes")
        exit(0)
print("No")
