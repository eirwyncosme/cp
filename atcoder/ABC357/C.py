# Editorial

import typing
import functools

@functools.cache
def f(N: int) -> list[list[str]]:
    if N == 0: return [["#"]]
    sub = f(N - 1)

    l = len(sub)
    res = [["." for i in range(3 * l)] for j in range(3 * l)]

    for I in range(3):
        for J in range(3):
            if I != 1 or J != 1:
                for i in range(l):
                    for j in range(l):
                        res[I * l + i][J * l + j] = sub[i][j]

    return res
             
    

for x in f(int(input())):
    print("".join(x))
