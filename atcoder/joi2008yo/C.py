# Cleanest code ever
n = int(input())
T = []
for i in range(n):
    T.append(int(input()))
T.sort()

H = []
for i in range(1, 2 * n + 1):
    if i not in T: H.append(i)


last = None
c = 0

while True:
    if c % 2 == 0:
        if not last:
            last = T[0]
            T.remove(T[0])
        else:
            ok = False
            for x in T:
                if x > last:
                    last = x
                    T.remove(x)
                    ok = True
                    break
            if not ok:
                last = None
    else:
        if not last:
            last = H[0]
            H.remove(H[0])
        else:
            ok = False
            for x in H:
                if x > last:
                    last = x
                    H.remove(x)
                    ok = True
                    break
            if not ok:
                last = None
    c += 1
    if len(H) == 0 or len(T) == 0:
        break

print(len(H))
print(len(T))
