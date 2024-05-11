decks = [input(), input(), input()]
poss = [0] * 3
current = 0

while True:
    poss[current] += 1
    if poss[current] == len(decks[current]):
        print(chr(current + ord('A')))
        break

    current = ord(decks[current][poss[current]]) - ord('a')
    print(poss, current)
