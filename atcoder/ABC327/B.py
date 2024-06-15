B = int(input())

c = 1

while c ** c <= B:
    if c ** c == B:
        print(c)
        exit(0)
    c += 1
print(-1)
