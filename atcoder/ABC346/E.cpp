#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int h, w, m;
	cin >> h >> w >> m;

	vector<vector<int>> v(h, vector<int>(w));

	map<int, int> ma;
	int k = 1;
	ma[0] = h * w;

	for (int i = 0; i < m; i++) {
		int t, a, x;
		cin >> t >> a >> x;

		if (t == 1) {
			for (int i = 0; i < w; i++) {
				ma[v[a - 1][i]]--;
				if (!ma[v[a - 1][i]]) k--;
				if (!ma[x]) k++;
				ma[x]++;
				v[a - 1][i] = x;
			}
		} else {
			for (int i = 0; i < h; i++) {
				ma[v[i][a - 1]]--;
				ma[x]++;
				v[i][a - 1] = x;
			}
		}
	}

	cout << k << '\n';
	for (auto it = ma.begin(); it != ma.end(); it++) {
		if (it->second) {
			cout << it->first << " " << it->second << "\n";
		}
	}
}
