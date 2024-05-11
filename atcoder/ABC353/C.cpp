/* From the editorial */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(void)
{
	int N;
	cin >> N;

	vector<ll> A(N);
	for (auto& x: A) cin >> x;

	sort(A.begin(), A.end());

	int r = N;
	ll ans = 0;
	/* # larger than 100000000 */
	ll c = 0;

	for (int i = 0; i < N; i++) {
		r = max(r, i + 1);
		while (r - 1 > i && A[r - 1] + A[i] >= 100000000) {
			r--;
		}
		c += N - r;
	}

	for (int i = 0; i < N; i++) {
		ans += A[i] * (N - 1);
	}

	ans -= c * 100000000;
	cout << ans << endl;
}
