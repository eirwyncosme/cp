#include <bits/stdc++.h>

using namespace std;


bool solve(void)
{
	int n, c, d;
	cin >> n >> c >> d;

	map<int, int> M;
	int minn = 1<<31-1;
	for (int i = 0; i < n * n; i++) {
		int t; cin >> t;
		minn = min(minn, t);
		M[t]++;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j && i == 0) continue;
			int proj = minn + i * c + j * d;
			if (M[proj]) M[proj]--;
			else return false;
		}
	}

	return true;
}


int main(void)
{
	int t; cin >> t;
	while (t--) {
		if (solve()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
