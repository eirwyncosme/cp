/* A new data structure! */

#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int n, q;
	cin >> n >> q;
	
	deque<pair<int, int>> locs;
	for (int i = 1; i < n + 1; i++) locs.push_back({i, 0});
	int x = 1, y = 0;

	while (q--) {
		int t;
		cin >> t;

		if (t == 1) {
			char c;
			cin >> c;
			
			if (c == 'R') locs.push_front({++x, y});
			else if (c == 'L') locs.push_front({--x, y});
			else if (c == 'U') locs.push_front({x, ++y});
			else if (c == 'D') locs.push_front({x, --y});
			locs.pop_back();
		} else {
			int p;
			cin >> p;
			p -= 1;

			cout << locs[p].first << " " << locs[p].second << '\n';
		}
	}
}
