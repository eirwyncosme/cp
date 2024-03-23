#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int n, m, l, q;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	cin >> m;
	vector<int> b(m);
	for (int i = 0; i < m; i++) cin >> b[i];

	cin >> l;
	vector<int> c(l);
	for (int i = 0; i < l; i++) cin >> c[i];


	cin >> q;
	vector<int> x(q);
	for (int i = 0; i < q; i++) {
		cin >> x[i];
	}


	vector<int> v;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < l; k++) {
				v.push_back(a[i] + b[j] + c[k]);
			}
		}
	}
	sort(v.begin(), v.end());

	for (const auto& ele: x) {
		if (binary_search(v.begin(), v.end(), ele)) cout << "Yes\n";
		else cout << "No\n";
	}
}
