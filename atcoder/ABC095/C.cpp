#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int A, B, C, X, Y;
	cin >> A >> B >> C >> X >> Y;

	int ans = 1 << 31 - 1;
	for (int i = 0; i <= 100000; i++) {
		ans = min(ans, 2 * C * i + max(X - i, 0) * A + max(Y - i, 0) * B);
	}

	cout << ans << endl;
}
