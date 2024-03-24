#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	string s;

	cin >> s;

	char last = s[0];
	int n = 0;
	int max = 0;
	for (const char& ch : s) {
		if (ch == last) n++;	
		else n = 0;
		if (max < n) max = n;
		last = ch;
	}

	cout << (max >= 6 ? "YES" : "NO") << "\n";
}
