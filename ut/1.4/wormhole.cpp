#include <bits/stdc++.h>

using namespace std;


int solve(vector<pair<int, int>>, v)
{
	
}

int main(void)
{
	int n;
	cin >> n;

	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}

	int ans = solve(v);
	cout << ans << '\n';
}
