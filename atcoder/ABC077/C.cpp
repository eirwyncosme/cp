#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int N; cin >> N;
	vector<int> A(N), B(N), C(N);
	for (int i = 0; i < N; i++) cin >> A[i];
	for (int i = 0; i < N; i++) cin >> B[i];
	for (int i = 0; i < N; i++) cin >> C[i];
	ranges::sort(A);
	ranges::sort(C);

	long long ans = 0;

	for (auto x: B) {
		auto lower = ranges::lower_bound(A, x);
		auto upper = ranges::upper_bound(C, x);

		ans += (lower - A.begin()) * (C.end() - upper);
	}

	cout << ans << endl;
}
