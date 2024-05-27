#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N; cin >> N;
	vector<int> P(N), Q(N), A(N), B(N);
	for (int i = 0; i < N; i++) cin >> P[i];
	for (int i = 0; i < N; i++) cin >> Q[i];
	iota(A.begin(), A.end(), 1);
	iota(B.begin(), B.end(), 1);

	int a = 0, b = 0;
	do {
		a++;
		if (A == P) break;
	} while (next_permutation(A.begin(), A.end()));
	do {
		b++;
		if (B == Q) break;
	} while (next_permutation(B.begin(), B.end()));

	cout << abs(a - b) << endl;
}
