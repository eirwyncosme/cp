#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N; cin >> N;
	int c = 0;
	while (!(N & 1)) {
		c++;
		N >>= 1;
	}
	cout << c << endl;
}
