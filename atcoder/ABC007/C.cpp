#include <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};


int main(void)
{
	int R, C; cin >> R >> C;
	int sy, sx, gy, gx; cin >> sy >> sx >> gy >> gx;
	sy--; sx--; gy--; gx--;
	vector<string> V(R);
	for (int i = 0; i < R; i++) {
		cin >> V[i];
	}

	vector<vector<int>> D(R, vector<int>(C));
	vector<vector<bool>> went(R, vector<bool>(C));

	queue<pii> que;
	que.push({sy, sx});
	D[sy][sx] = 0;
	while (!que.empty()) {
		pii P = que.front(); que.pop();
		int y = P.first, x = P.second;
		
		if (y == gy && x == gx) break;

		for (int i = 0;	i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny >= 0 && ny < R && nx >= 0 && nx < C && !went[ny][nx] && V[ny][nx] != '#') {
				D[ny][nx] = D[y][x] + 1;						
				pii nP = {ny, nx};
				went[ny][nx] = true;
				que.push(nP);
			}
		}
	}

	cout << D[gy][gx] << endl;
}
