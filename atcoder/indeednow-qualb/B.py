S = input()
T = input()

for i in range(len(S)):
    if S == T:
        print(i)
        from sys import exit
        exit(0)
    S = S[-1] + S[:-1]
print(-1)
