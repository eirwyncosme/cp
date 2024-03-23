/*
ID: eirwync1
LANG: C++
PROG: gift1
*/

#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	ifstream in("gift1.in");
	ofstream out("gift1.out");

	int n;
	in >> n;

	vector<string> a(n);
	map<string, int> b;
	for (int i = 0; i < n; i++) {
		in >> a[i];
		b[a[i]] = 0;
	}

	for (int i = 0; i < n; i++) {
		string giver;
		in >> giver;

		int amt, ppl;
		in >> amt >> ppl;

		if (!ppl) continue;

		for (int i = 0; i < ppl; i++) {
			string rec;
			in >> rec;

			b[rec] += amt / ppl;
		}

		b[giver] -= amt - (amt % ppl);
	}

	for (int i = 0; i < n; i++) {
		out << a[i] << " " << b[a[i]] << '\n';
	}
}
