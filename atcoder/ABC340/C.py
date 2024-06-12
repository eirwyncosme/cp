import typing
import functools

@functools.cache
def f(N: int) -> int:
    if N == 1: return 0
    return N + f(N // 2) + f((N + 1) // 2)


N = int(input())
print(f(N))
