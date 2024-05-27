A, B = (int(x) for x in input().split())
l = [1, 2, 3]
try: l.remove(A)
except: pass
try: l.remove(B)
except: pass
print(l[0] if len(l) == 1 else -1)
