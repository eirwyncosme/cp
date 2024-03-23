"""
ID: eirwync1
LANG: PYTHON3
TASK: milk2
"""

ss = []
ee = []

with open("milk2.in", "r") as f:
	n = int(f.readline())
	for _ in range(n):
		s, e = map(int, f.readline().split())
		ss.append(s)
		ee.append(e)

ss.sort()
ee.sort()


last = 0
mm = 0
mf = 0
# compress and solve
for i in range(1, n):
	if ss[i] > ee[i - 1]:
		mm = max(mm, ee[i - 1] - ss[last])
		last = i

	mf = max(mf, ss[i] - ee[i - 1])

# milked for entire time
if mm == 0:
	mm = ee[-1] - ss[0]

with open("milk2.out", "w") as f:
	f.write(f"{mm} {mf}\n")
