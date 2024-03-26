#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N;
	cin >> N;
	vector<int> L, G;

	for (int i = 0; i < N; i++) {
		char ch;
		int k;
		cin >> ch >> k;
		if (ch == 'L') L.push_back(k);
		else G.push_back(k);
	}

	sort(L.begin(), L.end());
	sort(G.begin(), G.end());

	int l = L.size(), g = G.size();

	int ans = 1000;
	for (int i = 0; i < l; i++) {
		int c = i;
		for (int j = 0; j < g; j++) {
			if (G[j] > L[i]) c++;
		}
		ans = min(ans, c);
	}

	cout << ans << '\n';
}
