N = int(input())
P = [int(x) for x in input().split()]
for i in range(int(input())):
    A, B = (int(x) for x in input().split())
    print(A if P.index(A) < P.index(B) else B)
