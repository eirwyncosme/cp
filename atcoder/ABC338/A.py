from string import ascii_uppercase, ascii_lowercase
S = input()
if S[0] in ascii_uppercase and all(x in ascii_lowercase for x in S[1:]):
    print("Yes")
else:
    print("No")
