N = int(input())
A = [0] * N

for i in range(N):
    A[i] = input()

for i in range(N):
    s = input()
    if s != A[i]:
        for j in range(N):
            if s[j] != A[i][j]:
                print(i + 1, j + 1)
