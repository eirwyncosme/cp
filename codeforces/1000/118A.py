from string import ascii_uppercase

s = input()
r = ""

for x in s:
    if x.lower() in ['a', 'e', 'i', 'o', 'u', 'y']:
        continue

    r += f".{x.lower()}"

print(r)
