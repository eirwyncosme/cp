#include <vector>
#include <iostream>

using namespace std;


int n, m;
vector<vector<char>> v(100, vector<char>(100));
vector<vector<bool>> went(100, vector<bool>(100));

void dfs(int i, int j)
{
	v[i][j] = '.';
	for (int x = -1; x <= 1; x++) {
		for (int y = -1; y <= 1; y++) {
			if (i + x < n && j + y < m &&
					i + x >= 0 && j + y >= 0 &&
					v[i + x][j + y] == 'W') {
				dfs(i + x, j + y);
			}
		}
	}
}

void solve(void)
{
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (v[i][j] == 'W' && !went[i][j]) {
				dfs(i, j);
				ans++;
			}
		}
	}

	cout << ans << '\n';
}

int main(void)
{
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
		}
	}

	solve();
}
