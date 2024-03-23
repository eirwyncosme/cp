"""
ID: eirwync1
LANG: PYTHON3
TASK: ride
"""

with open("ride.in", 'r') as f:
	s = f.readline()
	t = f.readline()

r1, r2 = 1, 1
for x in s:
	r1 *= ord(x) - ord('A') + 1
for x in t:
	r2 *= ord(x) - ord('A') + 1

with open("ride.out", 'w') as f:
	if r1 % 47 == r2 % 47:
		f.write("GO\n")
	else:
		f.write("STAY\n")
