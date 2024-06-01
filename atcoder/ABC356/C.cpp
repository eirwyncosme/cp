#include <bits/stdc++.h>

using namespace std;
using P = pair<int, bool>;

int N, M, K, c;
vector<P> res(100);
vector<vector<int>> keys;
vector<bool> check(15);

bool valid(void)
{
	for (int i = 0; i < M; i++) {
		int vs = 0;
		for (int j = 0; j < res[i].first; j++) vs += check[keys[i][j]];
		if (vs < K && res[i].second) return false;
		else if (vs >= K && !res[i].second) return false;
	}
	return true;
}

int main(void)
{
	cin >> N >> M >> K;
	for (int i = 0; i < M; i++) {
		int C; cin >> C;

		vector<int> tried(C);
		for (int j = 0; j < C; j++) {
			cin >> tried[j];
			tried[j]--;
		}
		keys.push_back(tried);

		char R; cin >> R;
		res[i] = {C, R == 'o'};
	}

	int ans = 0;
	for (int bits = 0; bits < 1 << N; bits++) {
		check.assign(15, false);
		for (int e = 0; e < N; e++) check[e] = 1<<e & bits;
		
		ans += valid();
	}
	cout << ans << endl;
}
