N = int(input())
cards = []
gone = [False] * N
d = {}

for i in range(N):
    t = tuple(int(x) for x in input().split())
    cards.append(t)
    d[t] = i

cards.sort()

C = cards[N - 1][1]
left = N
for i in reversed(range(N - 1)):
    if cards[i][1] > C:
        gone[d[cards[i]]] = True
        left -= 1 
    C = min(C, cards[i][1]) 
    

p = False
print(left)
for i in range(N):
    if gone[i]: continue
    if p: print(" ", end="")
    print(i + 1, end="")
    p = True
print()
