#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int n;
	cin >> n;
	vector<pair<int, int>> coords(n);
	for (int i = 0; i < n; i++) {
		cin >> coords[i].first >> coords[i].second;
	}

	for (int i = 0; i < n; i++) {
		int m = 0;
		int mid = 0;
		for (int j = 0; j < n; j++) {
			int dx = coords[i].first - coords[j].first;
			int dy = coords[i].second - coords[j].second;
			int d = dx * dx + dy * dy;

			if (d > m) {
				m = d;
				mid = j + 1;
			}
		}

		cout << mid << endl;
	}
}
