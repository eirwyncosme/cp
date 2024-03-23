"""
ID: eirwync1
LANG: PYTHON3
TASK: palsquare
"""

import typing
from string import ascii_uppercase

def to_base(n: int, b: int) -> str:
	ans = ""

	while n:
		if n % b > 9:
			ans += ascii_uppercase[n % b - 10]
		else:
			ans += str(n % b)
		n //= b

	return ans[::-1]

with open("palsquare.in", 'r') as f:
	b = int(f.readline())


with open("palsquare.out", 'w') as f:
	for i in range(1, 301):
		bs = to_base(i * i, b)
		if bs == bs[::-1]:
			f.write(f"{to_base(i, b)} {bs}\n")
