#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int q; cin >> q;

	vector<int> v;
	for (int i = 0; i < q; i++) {
		int t; cin >> t;
		if (t == 2) {
			v.pop_back();
		} else if (t == 0) {
			int e; cin >> e;
			v.push_back(e);
		} else {
			int e; cin >> e;
			cout << v[e] << endl;
		}
	}

	return 0;
}
