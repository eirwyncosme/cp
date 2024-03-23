l = []
while True:
    l.append(input())
    if l[-1] == '0': break

for i in reversed(range(len(l))):
    print(l[i])
