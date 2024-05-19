#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(void)
{
	int N, M;
	cin >> N >> M;

	vector<vector<int>> A(N, vector<int>(M));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
		}
	}

	ll ans = 0;
	for (int i = 0; i < M; i++) {
		for (int j = i + 1; j < M; j++) {
			ll tans = 0;
			if (i == j) continue;

			for (int k = 0; k < N; k++) {
				tans += max(A[k][i], A[k][j]);
			}
			ans = max(ans, tans);
		}
	}

	cout << ans << endl;
}
