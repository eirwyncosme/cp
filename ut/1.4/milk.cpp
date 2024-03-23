/*
ID: eirwync1
LANG: C++
PROG: milk
*/

#include <bits/stdc++.h>

using namespace std;


using Farm = struct {
	int p, a;
};

int main(void)
{
	ifstream in("milk.in");
	ofstream out("milk.out");

	int n, m;
	in >> n >> m;

	vector<Farm> v(m);
	for (int i = 0; i < m; i++) {
		in >> v[i].p >> v[i].a;
	}

	sort(v.begin(), v.end(), [](const Farm& a, const Farm& b) -> bool {
		return a.p < b.p;
	});

	int c = 0;
	int ans = 0;
	while (n > 0) {
		ans += v[c].p;
		n--;
		v[c].a--;

		if (v[c].a == 0) c++;
	}

	out << ans << '\n';
}
