N, L = (int(x) for x in input().split())
print(len([x for x in input().split() if int(x) >= L]))
