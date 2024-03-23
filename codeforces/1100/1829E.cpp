#include <bits/stdc++.h>

using namespace std;


int dfs(vector<vector<int>>& v, vector<vector<bool>>& vis, int i, int j)
{
	int ans = v[i][j];

	vis[i][j] = true;

	if (v[i][j] == 0) return 0;

	if (i != 0 && !vis[i - 1][j]) {
		ans += dfs(v, vis, i - 1, j);
	}

	if (i != v.size() - 1 && !vis[i + 1][j]) {
		ans += dfs(v, vis, i + 1, j);
	}

	if (j != 0 && !vis[i][j - 1]) {
		ans += dfs(v, vis, i, j - 1);
	}

	if (j != v[0].size() - 1 && !vis[i][j + 1]) {
		ans += dfs(v, vis, i, j + 1);
	}

	return ans;
}


void solve(void)
{
	int n, m;
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m));
	vector<vector<bool>> vis(n, vector<bool>(m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (v[i][j] && !vis[i][j]) {
				ans = max(ans, dfs(v, vis, i, j));
			}
		}
	}

	cout << ans << '\n';
}

int main(void)
{
	int t;
	cin >> t;
	while (t--) solve();
}
