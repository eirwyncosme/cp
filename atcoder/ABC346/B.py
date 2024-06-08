W, B = (int(x) for x in input().split())

S = "wbwbwwbwbwbw" * (W + B)

for i in range(W + B, len(S)):
    r = S[i - W - B: i]
    if r.count("w") == W and r.count("b") == B:
        print("Yes")
        from sys import exit
        exit(0)
print("No")
