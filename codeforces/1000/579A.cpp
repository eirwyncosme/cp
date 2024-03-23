#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int n;
	cin >> n;

	int ans = 0;
	while (n) {
		if (n & 1) ans++;
		n = n >> 1;	
	}

	cout << ans << "\n";
}
