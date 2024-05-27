#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N; cin >> N;

	int ans = 0;
	for (int i = 0; i < N; i++) {
		int t; cin >> t;
		bool prime = true;
		for (int j = 2; j <= sqrt(t); j++) {
			if (t % j == 0) {
				prime = false;
				break;
			}
		}
		ans += prime;
	}

	cout << ans << endl;
}
