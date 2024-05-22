S = input()
N = len(S)

joi = 0
ioi = 0
for i in range(1, N):
    if S[i] == 'O' and S[i + 1] == 'I':
        if S[i - 1] == 'I':
            ioi += 1
        elif S[i - 1] == 'J':
            joi += 1

print(joi)
print(ioi)
