#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N; cin >> N;
	vector<int> A(N); for (int i = 0; i < N; i++) cin >> A[i];

	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = N - 1; j >= i + 1; j--) {
			if (A[j] < A[j - 1]) {
				swap(A[j], A[j - 1]);
				ans++;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		if (i) cout << " ";
		cout << A[i];
	}
	cout << endl << ans << endl;
}
