#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N; cin >> N;
	vector<int> A(N, -100);
	int np = 0;
	for (int i = 0; i < N; i++) {
		int K; cin >> K;
		if (K == -1) {
			np = i;
		} else {
			K--;
			A[K] = i;
		}
	}

	while (true) {
		if (np == -100) break;
		cout << np + 1 << " ";
		np = A[np];
	}
	cout << endl;
}
