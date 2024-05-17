N = int(input())
a = [0] * N
for i in range(N):
    a[i] = int(input()) - 1


from sys import exit
went = {}
pos = 0
while True:
    if pos == 1: break
    if went.get(pos):
        print(-1)
        exit(0)
    
    went[pos] = True
    pos = a[pos]


print(len(went))
