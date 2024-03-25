#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	freopen("circlecross.in", "r", stdin);
	freopen("circlecross.out", "w", stdout);
	string s;
	cin >> s;

	int ans = 0;
	for (char i = 'A'; i <= 'Z'; i++) {
		map<char, int> m;
		for (int j = s.find(i) + 1; j < s.rfind(i); j++) {
			m[s[j]]++;
		}
		for (auto& x: m) {
			if (x.second % 2) ans++;
		}
	}

	cout << ans / 2 << '\n';
}
