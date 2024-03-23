#include <bits/stdc++.h>

using namespace std;


bool p(int n, int m)
{
	if (n == m) return true;
	if (n % 3) return false;

	return p(n / 3 * 2, m) || p(n / 3, m);
}

void solve(void)
{
	int n, m;
	cin >> n >> m;

	cout << (p(n, m) ? "YES" : "NO") << '\n';
}

int main(void)
{
	int t;
	cin >> t;
	while (t--) solve();
}
