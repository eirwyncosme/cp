N, A = (int(x) for x in input().split())
T = [int(x) for x in input().split()]

c = 0
for i in range(N):
    if i == 0:
        print(A + T[i])
        c += A + T[i]
    else:
        if T[i] - T[i - 1] <= A:
            print(c + A)
            c += A
        else:
            d = T[i] - c
            print(c + d + A)
            c += d + A

