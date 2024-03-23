#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int cases;
	cin >> cases;

	while (cases--) {
		int l;
		cin >> l;
		vector<pair<int, int>> a(l), b(l), c(l);
		for (int i = 0; i < l; i++) {
			int x; cin >> x;
			a[i] = make_pair(x, i);
		}
		for (int i = 0; i < l; i++) {
			int x; cin >> x;
			b[i] = make_pair(x, i);
		}
		for (int i = 0; i < l; i++) {
			int x; cin >> x;
			c[i] = make_pair(x, i);
		}

		/* Sort in opposite order */
		sort(a.begin(), a.end(), [](auto& left, auto& right) { return left.first > right.first; });
		sort(b.begin(), b.end(), [](auto& left, auto& right) { return left.first > right.first; });
		sort(c.begin(), c.end(), [](auto& left, auto& right) { return left.first > right.first; });
		
		int ans = 0;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				for (int k = 0; k < 3; k++) {
					if (a[i].second == b[j].second ||
						b[j].second == c[k].second ||
						c[k].second == a[i].second) continue;
					ans = max(ans, a[i].first + b[j].first + c[k].first);
				}
			}
		}

		cout << ans << "\n";
	}
}
