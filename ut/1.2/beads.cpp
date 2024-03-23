/*
ID: eirwync1
LANG: C++
PROG: beads
*/

#include <bits/stdc++.h>

using namespace std;


int count(string s)
{
	char f = '\0';
	int c = 0;

	for (; c < s.length(); c++) {
		if (!f && s[c] != 'w') {
			f = s[c];
		} else if (f && s[c] != f && s[c] != 'w') {
			break;
		}
	}

	return c;
}

int main(void)
{
	ifstream in("beads.in");
	ofstream out("beads.out");

	int n;
	in >> n;

	string s;
	in >> s;
	s += s;

	int m = 0;
	for (int i = 0; i < n; i++) {
		string t = s.substr(i, n);
		reverse(t.begin(), t.end());
		m = max(m, count(s.substr(i, n)) + count(t));
	}

	out << min(m, n) << '\n';
}
