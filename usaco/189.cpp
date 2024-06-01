#include <bits/stdc++.h>

using namespace std;


int N;
vector<vector<char>> G(5, vector<char>(5));
vector<vector<bool>> vis(5, vector<bool>(5));
int ans = 0;
int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};


void dfs(int x, int y, int l, int r)
{
	if (l && l == r) {
		ans = max(ans, l + r);
		return;
	}

	if (G[x][y] == '(') l++;
	else r++;

	vis[x][y] == true;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		cout << nx << " " << ny << endl;

		if (nx >= 0 && nx < N && ny >= 0 && ny < N && !vis[nx][ny]) {
			dfs(nx, ny, l, r);
		}
	}
	cout << endl;
}

int main(void)
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> G[i][j];
		}
	}

	dfs(0, 0, 0, 0);
	cout << ans << endl;
}
