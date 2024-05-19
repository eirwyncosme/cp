#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N; cin >> N;
	map<string, int> M;
	set<string> S;
	int m = 0;
	for (int i = 0; i < N; i++) {
		string x;
		cin >> x;
		S.insert(x);
		M[x]++;
		m = max(m, M[x]);
	}

	vector<string> mosts;
	for (auto it = M.begin(); it != M.end(); it++) {
		if (it->second == m) {
			mosts.push_back(it->first);
		}
	}

	sort(mosts.begin(), mosts.end());
	for (auto x: mosts) cout << x << endl;
}
