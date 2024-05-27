#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int N, T; cin >> N >> T;
	vector<int> A(T);
	vector<bool> board(N * N);

	for (int i = 0; i < T; i++) {
		int t; cin >> t; t--;
		board[t] = true;

		bool hor = true, ver = true, di1 = true, di2 = true;
		for (int i = t - (t % N); i < t + (N - (t % N)); i++) {
			if (!board[i]) {
				hor = false;
				break;
			}
		}

		for (int i = t % N; i < N * N; i += N) {
			if (!board[i]) {
				ver = false;
				break;
			}
		}
		
		for (int i = 0; i < N * N; i += N + 1) {
			if (!board[i]) {
				di1 = false;
				break;
			}
		}

		for (int i = 1; i <= N; i++) {
			if (!board[(N - 1) * i]) {
				di2 = false;
				break;
			}
		}

		if (hor || ver || di1 || di2) {
			cout << i + 1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
