#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N; cin >> N;
	string S; cin >> S;
	int ans = 0;
	for (int i = 2; i < N; i++) {
		ans += S[i - 2] == 'A' && S[i - 1] == 'B' && S[i] == 'C';
	}
	cout << ans << endl;
}
