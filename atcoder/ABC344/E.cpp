#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int e;
		cin >> e;

		if (e == 2) {
			int e2; cin >> e2;
			a.erase(find(a.begin(), a.end(), e2));
		} else {
			int e2, e3;
			cin >> e2 >> e3;
			a.insert(find(a.begin(), a.end(), e2) + 1, 1, e3);
		}
	}

	for (int i = 0; i < a.size(); i++) {
		if (i) cout << " ";
		cout << a[i];
	}
	cout << "\n";
}

