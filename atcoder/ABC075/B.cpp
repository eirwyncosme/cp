#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int H, W; cin >> H >> W;
	vector<vector<char>> S(H, vector<char>(W));
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> S[i][j];
		}
	}

	vector<vector<char>> res = S;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (S[i][j] == '#') continue;
			int c = 0;
			for (int y = -1; y <= 1; y++) {
				for (int x = -1; x <= 1; x++) {
					int ny = i + y;
					int nx = j + x;
					if (ny >= 0 && ny < H && nx >= 0 && nx < W && S[ny][nx] == '#') {
						c++;
					}
				}
			}
			res[i][j] = c + '0';
		}	
	}

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cout << res[i][j];
		}
		cout << endl;
	}
}
