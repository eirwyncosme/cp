N = int(input())
A = [int(x) for x in input().split()]

for x in A:
    if x % 2 == 0 and not (x % 3 == 0 or x % 5 == 0):
        print("DENIED")
        from sys import exit
        exit(0)
print("APPROVED")
