H = int(input())

for i in range(2, 100):
    if (2 ** i) - 1 > H:
        print(i)
        break
