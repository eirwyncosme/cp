#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	ifstream in("cownomics.in");
	ofstream out("cownomics.out");

	int n, m;
	in >> n >> m;

	vector<string> spots(n), nospots(n);
	for (auto& x: spots) in >> x;
	for (auto& x: nospots) in >> x;

	in.close();

	int ans = 0;
	for (int i = 0; i < m; i++) {
		set<char> s;	
		for (int j = 0; j < n; j++) {
			s.insert(spots[j][i]);
		}
		if (s.size() >= 4) continue;

		bool b = false;
		for (int j = 0; j < n; j++) {
			if (s.find(nospots[j][i]) != s.end()) {
				b = true;
				break;
			}
		}

		if (!b) ans++;
	}

	out << ans << '\n';
	out.close();
}
