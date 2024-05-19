N, A, B = (int(x) for x in input().split())
S = input()

c = 0
cb = 0
for i in range(N):
    if S[i] == 'a' and c < A + B:
        print("Yes")
        c += 1
    elif S[i] == 'b' and c < A + B and cb < B:
        print("Yes")
        c += 1
        cb += 1
    else:
        print("No")
