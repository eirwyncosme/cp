#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(void)
{
	ll N, T; cin >> N >> T;

	ll hay = 0, ld = 0, rem = 0;
	for (int i = 0; i < N; i++) {
		ll d, b; cin >> d >> b;
		hay += b;
		rem = max(rem - (d - ld), (ll)0) + b;
		ld = d;
	}
	rem = max(rem - (T + 1 - ld), (ll)0);

	cout << hay - rem << endl;
}
