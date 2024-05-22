#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(void)
{
	int N;
	cin >> N;
	vector<ll> A(N), B(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i] >> B[i];
	}

	ranges::sort(A);
	ranges::sort(B);

	ll ma, mb;
	if (N % 2) {
		ma = A[N / 2];
		mb = B[N / 2];
	} else {
		ma = (A[N / 2 - 1] + A[N / 2]) / 2;
		mb = (B[N / 2 - 1] + B[N / 2]) / 2;
	}

	ll ans = 0;
	for (int i = 0; i < N; i++) {
		ans += abs(A[i] - B[i]);
		ans += abs(ma - A[i]);
		ans += abs(mb - B[i]);
	}

	cout << ans << endl;
}
