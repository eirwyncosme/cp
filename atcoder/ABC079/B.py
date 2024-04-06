from functools import cache


@cache
def lucas(N: int) -> int:
    if N == 0: return 2
    elif N == 1: return 1

    return lucas(N - 1) + lucas(N - 2)


N = int(input())
print(lucas(N))
