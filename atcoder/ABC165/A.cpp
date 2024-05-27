#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int K, A, B; cin >> K >> A >> B;
	for (int i = A; i <= B; i++) {
		if (i % K == 0) {
			cout << "OK\n";
			return 0;
		}
	}
	cout << "NG\n";
}
