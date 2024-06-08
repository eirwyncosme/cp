#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int A, B, K; cin >> A >> B >> K;

	int c = 0;
	int i;
	for (i = min(A, B); i > 0; i--) {
		c += A % i == 0 && B % i == 0;
		if (c == K) break;
	}

	cout << i << endl;
}
