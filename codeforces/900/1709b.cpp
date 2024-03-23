#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int n, m;
	cin >> n >> m;

	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];

	/* Precalculate */
	vector<pair<long long, long long>> w(n + 1);
	w[0] = make_pair(0, 0);
	for (int i = 0; i < n; i++) {
		/* If fall forwards */
		if (i != 0 && v[i] < v[i - 1]) {
			w[i + 1].first = v[i - 1] - v[i] + w[i].first;
		} else {
			w[i + 1].first = w[i].first;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		/* If fall backwards */
		if (i != 0 && v[i] > v[i - 1]) {
			w[i].second = v[i] - v[i - 1] + w[i + 1].second;
		} else {
			w[i].second = w[i + 1].second;
		}
	}


	for (int i = 0; i < m; i++) {
		int s, t;
		cin >> s >> t;

		if (s < t) {
			cout << w[t].first - w[s].first << "\n";
		} else {
			cout << w[t].second - w[s].second << "\n";
		}
	}
}
