#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(void)
{
	string S;
	cin >> S;

	int m = S.length() - 1;

	ll ans = 0;
	for (int bits = 0; bits < (1 << m); bits++) {
		ll part = 0;
		ll pp = S[0] - '0';
		for (int i = 0; i < m; i++) {
			if (bits & (1 << i)) {
				part += pp;
				pp = S[i + 1] - '0';
			} else {
				pp = 10 * pp + S[i + 1] - '0';
			}
		}
		part += pp;
		ans += part;
	}

	cout << ans << endl;
}
