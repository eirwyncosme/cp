#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int n, q;
	cin >> n;
	vector<int> A(n);
	for (auto& x: A) cin >> x;

	set<int> possible;
	for (int bits = 0; bits < 1 << n; bits++) {
		int s = 0;
		for (int e = 0; e < n; e++) {
			s += (1 << e) & bits ? A[e] : 0;
		}
		possible.insert(s);
	}

	cin >> q;
	vector<int> m(q);
	for (int i = 0; i < q; i++) {
		int t;
		cin >> t;
		if (possible.find(t) != possible.end()) cout << "yes\n";
		else cout << "no\n";
	}
}
