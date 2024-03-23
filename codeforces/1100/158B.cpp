/* Early ones */
#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(void)
{
	ll n;
	cin >> n;

	ll groups[] = {0, 0, 0, 0};
	for (int i = 0; i < n; i++) {
		int c;
		cin >> c;
		groups[c - 1]++;
	}

	ll total = 0;
	total += groups[3];

	/* All 3 groups */
	total += groups[2];
	groups[0] -= groups[2];

	total += groups[1] / 2;
	groups[1] %= 2;
	
	if (groups[1] != 0) {
		total++;
		groups[0] -= 2;
	}

	if (groups[0] > 0 && groups[0] <= 4) total++;
	else if (groups[0] > 4) {
		total += ceil((double)groups[0] / 4);
	}

	cout << total << "\n";
}
