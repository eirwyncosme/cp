"""
ID: eirwync1
LANG: PYTHON3
TASK: transform
"""

import typing
from copy import deepcopy

# Some SO code since there were issues with string copying
def rot_90(l: list[list[str]]) -> list[list[str]]:
	return [list(x) for x in zip(*l[::-1])]

def ref(l: list[list[str]]) -> list[list[str]]:
	return [x[::-1] for x in l]


with open("transform.in", 'r') as f:
	n = int(f.readline())

	s = []
	r = []
	for _ in range(n):
		s.append(list(f.readline().strip()))

	for _ in range(n):
		r.append(list(f.readline().strip()))

ss = ref(deepcopy(s))

with open("transform.out", 'w') as f:
	if (s := rot_90(s)) == r:
		f.write("1\n")

	elif (s := rot_90(s)) == r:
		f.write("2\n")

	# Keep it in elif
	elif (s := rot_90(s)) == r:
		f.write("3\n")

	elif ss == r:
		f.write("4\n")

	# Not amount of transformations but the number outputted
	elif (s := rot_90(s)) == r:
		f.write("6\n")

	elif (ss := rot_90(ss)) == r or (ss := rot_90(ss)) == r or (ss := rot_90(ss)) == r:
		f.write("5\n")

	else:
		f.write("7\n")
