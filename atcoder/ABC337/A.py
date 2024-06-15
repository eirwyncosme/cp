N = int(input())
T = A = 0
for i in range(N):
    X, Y = (int(x) for x in input().split())
    T += X
    A += Y

if T == A: print("Draw")
elif T > A: print("Takahashi")
else: print("Aoki")
