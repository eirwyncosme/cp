#include <bits/stdc++.h>

using ll = long long;
using namespace std;


int main(void)
{
	int N; cin >> N;
	vector<int> X(N);
	for (auto& x: X) cin >> x;

	ll ans = 1 << 31 - 1;
	for (int i = 1; i <= 100; i++) {
		ll c = 0;
		for (int j = 0; j < N; j++) {
			c += pow(X[j] - i, 2);
			//cout << c << endl;
		}
		ans = min(ans, c);
	}

	cout << ans << endl;
}
