#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N, M;
	cin >> N >> M;

	vector<int> k(M), p(M);
	vector<vector<int>> s;
	for (int i = 0; i < M; i++) {
		cin >> k[i];
		vector<int> si(k[i]);
		for (int j = 0; j < k[i]; j++) cin >> si[j];
		s.push_back(si);
	}
	for (int i = 0; i < M; i++) cin >> p[i];

	int ans = 0;
	for (int bits = 0; bits < 1 << N; bits++) {
		bool all = true;
		for (int i = 0; i < M; i++) {
			int c = 0;
			for (int j = 0; j < k[i]; j++) {
				c += (bits >> s[i][j] - 1) & 1;
			}
			
			if (c % 2 != p[i]) all = false;
		}
		ans += all;
	}
	cout << ans << endl;
}
