N = int(input())
l = []
sum = 0

for i in range(N):
    s, c = input().split()
    sum += int(c)
    l.append(s)

l.sort()
for i in range(N):
    if i == sum % N:
        print(l[i])
        break
