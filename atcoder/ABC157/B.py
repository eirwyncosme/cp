A = []
for _ in range(3):
    A.append([int(x) for x in input().split()])

N = int(input())

for _ in range(N):
    b = int(input())
    for i in range(3):
        for j in range(3):
            if A[i][j] == b:
                A[i][j] = 0

from sys import exit
for i in range(3):
    if all(x == 0 for x in A[i]):
        print("Yes")
        exit(0)
    if 0 == A[0][i] == A[1][i] == A[2][i]:
        print("Yes")
        exit(0)

if A[0][0] == A[1][1] == A[2][2] == 0 or A[2][0] == A[1][1] == A[0][2] == 0:
    print("Yes")
    exit(0)
print("No")
        
