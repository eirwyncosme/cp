#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	freopen("triangles.in", "r", stdin);
	freopen("triangles.out", "w", stdout);

	int N;
	cin >> N;

	vector<int> x(N), y(N);
	for (int i = 0; i < N; i++) {
		cin >> x[i] >> y[i];
	}

	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				if (x[i] == x[j] && y[i] == y[k]) {
					/* Confusing x and y */
					ans = max(ans, abs((y[i] - y[j]) * (x[i] - x[k])));
				}
			}
		}
	}

	cout << ans << "\n";
}
