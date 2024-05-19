N = int(input())
w = 0
b = 0

for _ in range(N):
    if input() == "white": w += 1
    else: b += 1

print("white" if w > b else "black")
