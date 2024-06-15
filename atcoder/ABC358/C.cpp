#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N, M; cin >> N >> M;
	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		string S; cin >> S;
		for (int j = 0; j < M; j++) {
			if (S[j] == 'o') {
				A[i] |= 1 << j;
			}
		}
	}

	int ans = N;
	for (int bits = 0; bits < 1<<N; bits++) {
		int check = 0;
		for (int e = 0; e < N; e++) {
			if (bits & (1 << e)) {
				check |= A[e];
			}
		}
		if (check == ((1<<M) - 1)) {
			ans = min(ans, __builtin_popcount(bits));
		}
	}

	cout << ans << endl;
}
