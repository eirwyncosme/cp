#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N; cin >> N;
	int ans = 0;
	for (int i = 1; i <= N; i++) {
		ans += to_string(i).length() % 2;
	}
	cout << ans << endl;
}
