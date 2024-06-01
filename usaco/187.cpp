#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	freopen("cowfind.in", "r", stdin);
	freopen("cowfind.out", "w", stdout);

	string s;
	cin >> s;
	int ans = 0;
	int bl = 0;
	for (int i = 0; i < s.size() - 1; i++) {
		if (s[i] == '(' && s[i + 1] == '(') bl++;	
		else if (s[i] == ')' && s[i + 1] == ')') ans += bl;
	}

	cout << ans << endl;
}
