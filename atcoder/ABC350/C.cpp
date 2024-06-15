#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N; cin >> N;
	vector<int> A(N), poss(N);
	for (int i = 0; i < N; i++) {
		int K; cin >> K;
		K--;
		poss[K] = i;
		A[i] = K;
	}

	vector<string> fixes;
	for (int i = 0; i < N; i++) {
		if (i != A[i]) {
			int t = poss[i];
			fixes.push_back(to_string(i + 1) + " " + to_string(t + 1));
			/* Missing updates in my last solution */
			swap(A[i], A[t]);
			poss[A[t]] = t;
			poss[i] = i;
		}
	}

	cout << fixes.size() << endl;
	for (auto& x: fixes) cout << x << endl;
}
