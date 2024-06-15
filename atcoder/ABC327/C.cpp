#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N = 9;
	vector<vector<char>> A(N, vector<char>(N));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> A[i][j];
		}
	}

	vector<bool> chk(N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int index = A[i][j] - '1';
			if (chk[index]) {
				cout << "No" << endl;
				return 0;
			}
			chk[index] = true;
		}
		fill(chk.begin(), chk.end(), false);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int index = A[j][i] - '1';
			if (chk[index]) {
				cout << "No" << endl;
				return 0;
			}
			chk[index] = true;
		}
		fill(chk.begin(), chk.end(), false);
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int y = 3 * i;
			int x = 3 * j;
			for (int k = 0; k < 3; k++) {
				for (int l = 0; l < 3; l++) {
					int index = A[y + k][x + l] - '1';
					if (chk[index]) {
						cout << "No" << endl;
						return 0;
					}
					chk[index] = true;
				}
			}
			fill(chk.begin(), chk.end(), false);
		}
	}

	cout << "Yes" << endl;
}
