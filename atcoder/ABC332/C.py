N, M = (int(x) for x in input().split())
S = input()

cn = M
cp = 0
ans = 0
for x in S:
    if x == '0':
        cn = M
        cp = ans
    elif x == '1':
        if cn == 0 and cp == 0:
            ans += 1
        elif cn == 0:
            cp -= 1
        else:
            cn -= 1
    else:
        if cp == 0:
            ans += 1
        else:
            cp -= 1
print(ans)
    
