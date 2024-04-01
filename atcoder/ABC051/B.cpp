#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int K, S;
	cin >> K >> S;

	int ans = 0;
	for (int i = 0; i <= K; i++) {
		for (int j = 0; j <= K; j++) {
			int k = S - i - j;
			if (k < 0 || k > K) continue;
			ans += i + j + k == S;
		}
	}

	cout << ans << endl;
}
