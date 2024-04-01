#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N, Y;
	cin >> N >> Y;

	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= N - i; j++) {
			int k = N - i - j;
			if (k < 0) continue;

			if (i * 10000 + j * 5000 + k * 1000 == Y && i + j + k == N) {
				cout << i << " " << j << " " << k << endl;
				return 0;
			}
		}
	}

	cout << "-1 -1 -1\n";
}
