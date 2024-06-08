#include <bits/stdc++.h>

using namespace std;

int m, n;
vector<vector<int>> V(90, vector<int>(90));
vector<vector<bool>> went(90, vector<bool>(90));
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};


int dfs(int y, int x, int current = 1)
{
	int ans = current;
	went[y][x] = true;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny >= 0 && ny < m && nx >= 0 && nx < n && V[ny][nx] && !went[ny][nx]) {
			ans = max(ans, dfs(ny, nx, current + 1));
		}
	}
	went[y][x] = false;
	return ans;
}

int main(void)
{
	cin >> m >> n;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> V[i][j];
		}
	}

	int ans = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (V[i][j]) {
				ans = max(ans, dfs(i, j));
			}
		}
	}

	cout << ans << endl;
}
