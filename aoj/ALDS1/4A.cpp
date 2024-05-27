#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int n;
	cin >> n;
	vector<int> A(n);
	for (auto& x: A) cin >> x;
	int q, ans = 0;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int t; cin >> t;
		for (int j = 0; j < n; j++) {
			if (A[j] == t) {
				ans += 1;
				break;
			}
		}
	}
	cout << ans << endl;
}
