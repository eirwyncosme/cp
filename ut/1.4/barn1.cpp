/*
ID: eirwync1
LANG: C++
PROG: barn1
*/

#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	ifstream in("barn1.in");
	ofstream out("barn1.out");

	int m, s, c;
	in >> m >> s >> c;

	vector<int> v(c);
	for (int i = 0; i < c; i++) {
		in >> v[i];
	}

	sort(v.begin(), v.end());

	vector<int> diffs;
	for (int i = 1; i < c; i++) {
		if (v[i] - v[i - 1] > 1) {
			diffs.push_back(v[i] - v[i - 1] - 1);
		}
	}

	sort(diffs.begin(), diffs.end());

	int sz = diffs.size();
	int chunks = sz + 1;
	int ans = c;


	for (int i = 0; i < sz && chunks > m; i++) {
		ans += diffs[i];
		chunks--;
	}

	out << ans << '\n';

}
