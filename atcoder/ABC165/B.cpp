#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(void)
{
	ll X; cin >> X;
	ll k = 100, ans = 0;
	while (k < X) {
		k += k / 100; ans++;
	}
	cout << ans << endl;
}
