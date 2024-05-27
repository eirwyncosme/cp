import typing
import functools
n = int(input())

@functools.cache
def fib(n: int) -> int:
    if n == 0 or n == 1: return 1
    return fib(n - 1) + fib(n - 2)

print(fib(n))
