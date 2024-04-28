N = int(input())
A = [int(x) for x in input().split()]

d = []

for i in range(N):
    d.append(A[i])

    while len(d) >= 2 and d[-1] == d[-2]:
        d.pop()
        x = d.pop()
        d.append(x + 1)


print(len(d))
        
