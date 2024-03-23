#include <bits/stdc++.h>

using namespace std;



void solve(void)
{
	string s;
	cin >> s;

	int n0 = count(s.begin(), s.end(), '0');
	int n1 = count(s.begin(), s.end(), '1');

	/* Optimization. find(s.begin() ...) could lead to O(n^2) time */
	int fn0 = n0;
	int fn1 = n1;

	for (int i = 0; i <= s.length(); i++) {
		if (s[s.length() - i] == '0') {
			fn0--;
		} else if (s[s.length() - i] == '1') {
			fn1--;
		}
		if (fn1 == n0 || fn0 == n1) {
			cout << i << "\n";
			break;
		}
	}
}

int main(void)
{
	int cases; 
	cin >> cases;
	while (cases--) {
		solve();
	}
}
