#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(void)
{
	int N; cin >> N;
	vector<ll> A(N);
	for (auto& x: A) cin >> x;

	ll sum = 0;
	ll mi = 0;
	for (int i = 0; i < N; i++) {
		sum += A[i];
		mi = min(mi, sum);
	}

	cout << sum - mi << endl;
}
