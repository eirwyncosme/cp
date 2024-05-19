#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N; cin >> N;

	int ans = 0;
	for (int i = 105; i <= N; i += 2) {
		int c = 0;
		for (int j = 1; j <= i; j++) {
			c += !(i % j);
		}
		ans += c == 8;
	}

	cout << ans << endl;
}
