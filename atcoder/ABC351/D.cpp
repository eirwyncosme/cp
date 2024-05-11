#include <bits/stdc++.h>

using namespace std;


vector<vector<bool>> can(1000, vector<bool>(1000));
int used[1000][1000];
int cnt;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int h, w;

void dfs(int y, int x, int s) {
	/* Stop loop */
	if (used[y][x] == s) return;
	used[y][x] = s;

	cnt++;
	if (!can[y][x]) return;

	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny >= 0 && ny < h && nx >= 0 && nx < w) {
			dfs(ny, nx, s);
		}
	}
}

int main(void)
{
	cin >> h >> w;

	vector<string> map(h);
	for (int i = 0; i < h; i++) cin >> map[i];

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (map[i][j] == '#') continue;

			/* Can start? */
			bool c = true;
			for (int k = 0; k < 4; k++) {
				int ny = i + dy[k];
				int nx = j + dx[k];
				if (ny >= 0 && ny < h && nx >= 0 && nx < w) {
					if (map[ny][nx] == '#') c = false;
				}
			}

			can[i][j] = c;
		}
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			used[i][j] = -1;
		}
	}

	int ans = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (map[i][j] == '.' && used[i][j] < 0) {
				cnt = 0;
				dfs(i, j, i * w + j);
				ans = max(ans, cnt);
			}
		}
	}

	cout << ans << endl;
}
