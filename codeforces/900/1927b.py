from string import ascii_lowercase

for _ in range(int(input())):
    input()
    l = [int(x) for x in input().split()]
    d = { 0 : list(ascii_lowercase) }

    for x in l:
        letter = d[x][0]
        print(letter, end="")

        d[x].remove(letter)
        try:
            d[x + 1].append(letter)
        except KeyError:
            d[x + 1] = [letter]

    print()
