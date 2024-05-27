#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int n, m; cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; i++) cin >> A[i];
	cin >> m;
	vector<int> B(m);
	for (int i = 0; i < m; i++) cin >> B[i];

	for (auto x: B) {
		if (!binary_search(A.begin(), A.end(), x)) {
			cout << 0 << endl;
			return 0;
		}
	}
	cout << 1 << endl;
	return 0;
}
