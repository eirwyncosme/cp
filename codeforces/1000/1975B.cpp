#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> A(n);
		for (auto& x: A) cin >> x;
		sort(A.begin(), A.end());

		bool ok = true;

		vector<int> v;
		for (int i = 0; i < n; i++) {
			if (A[i] % A[0]) {
				v.push_back(A[i]);
			}
		}

		for (int i = 0; i < v.size(); i++) {
			if (v[i] % v[0]) {
				ok = false;
				break;
			}
		}

		if (ok) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
