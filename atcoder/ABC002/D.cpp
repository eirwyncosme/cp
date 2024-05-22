#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int N, M; cin >> N >> M;
	vector<vector<int>> rels(N, vector<int>(N));
	for (int i = 0; i < M; i++) {
		int a, b; cin >> a >> b;
		rels[a - 1][b - 1] = 1;
		rels[b - 1][a - 1] = 1;
	}

	int ans = 0;
	for (int bits = 1; bits < 1 << N; bits++) {
		vector<int> current;
		for (int e = 0; e < N; e++) {
			if ((1 << e) & bits) current.push_back(e);
		}
		bool valid = true;
		for (int e = 0; e < N; e++) {
			if ((1 << e) & bits) {
				for (int i = 0; i < current.size(); i++) {
					if (current[i] == e) continue;
					if (!rels[e][current[i]]) valid = false;
				}
			}
		}
		if (valid) {
			ans = max(ans, __builtin_popcount(bits));
		}
	}

	cout << ans << endl;
}
