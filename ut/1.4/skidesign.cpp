/*
ID: eirwync1
LANG: C++
PROG: skidesign
*/

#include <bits/stdc++.h>

using namespace std;


int main()
{
	ifstream in("skidesign.in");
	ofstream out("skidesign.out");

	int n;
	in >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++) in >> v[i];

	int m = INT_MAX;
	/* Search all elevation intervals and get all hills in them */
	for (int i = 0; i <= 83; i++) {
		int cost = 0, x;
		for (int j = 0; j < n; j++) {
			if (v[j] < i) {
				x = i - v[j];
			} else if (v[j] > i+17) {
				x = v[j] - (i + 17);
			} else {
				x = 0;
			}

			cost += x*x;
		}
		m = min(m, cost);
	}

	out << m << '\n';
}
