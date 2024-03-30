#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	freopen("lifeguards.in", "r", stdin);
	freopen("lifeguards.out", "w", stdout);

	int n;
	cin >> n;

	vector<pair<int, int>> v(n);
	int m = 0;
	for (auto& x: v) {
		cin >> x.first >> x.second;
		m = max(m, x.second);
	}
	
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int c = 0;
		for (int t = 0; t < m; t++) {
			for (int j = 0; j < n; j++) {
				if (j != i && v[j].first <= t && t < v[j].second) {
					c++;
					break;
				}
			}
		}
		ans = max(ans, c);
	}
	cout << ans << "\n";
}
