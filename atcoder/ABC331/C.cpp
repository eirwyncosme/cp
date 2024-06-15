#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(void)
{
	int N; cin >> N;
	vector<ll> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	vector<ll> B = A, psum(N);
	sort(B.begin(), B.end());
	psum[0] = B[0];
	for (int i = 1; i < N; i++) {
		psum[i] = psum[i - 1] + B[i];
	}

	for (int i = 0; i < N; i++) {
		auto p = upper_bound(B.begin(), B.end(), A[i]);
		cout << psum[N - 1] - psum[p - B.begin() - 1] << " ";
	}
	cout << endl;
}
