#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N;
	cin >> N;
	map<int, int> mins;

	for (int i = 0; i < N; i++) {
		int A, C;
		cin >> A >> C;
		mins[C] = (mins[C] != 0) ? min(mins[C], A) : A;
	}

	int ans = 0;
	for (auto& x: mins) {
		ans = max(ans, x.second);
	}

	cout << ans << endl;
}
