#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	long long n; cin >> n;
	long long ma = -100000000000, mi = 10000000000;
	for (long long i = 0; i < n; i++) {
		long long t; cin >> t;
		ma = max(ma, t - mi);
		mi = min(mi, t);
	}
	cout << ma << endl;
}
