/*
ID: eirwync1
LANG: C++
PROG: crypt1
*/

#include <bits/stdc++.h>

using namespace std;


/* Element counts */
map<int, int> vc;

bool valid_pp(int pp)
{
	while (pp) {
		if (!vc[pp % 10]) return false;
		pp /= 10;
	}
	return true;
}


int main(void)
{
	ifstream in("crypt1.in");
	ofstream out("crypt1.out");

	int n;
	in >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		in >> v[i];
		vc[v[i]]++;
	}


	int ans = 0;
	/* Constraints for n? */
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				for (int l = 0; l < n; l++) {
					for (int m = 0; m <  n; m++) {
						int c1 = v[i] * 100 + v[j] * 10 + v[k];
						int c2 = v[l] * 10 + v[m];
						
						int pp1 = c1 * v[m];
						int pp2 = c1 * v[l];
						int sum = c1 * c2;

						if (pp1 < 1000 && pp2 < 1000 && sum < 10000 &&
								valid_pp(pp1) && valid_pp(pp2) && valid_pp(sum)) {
							ans++;
						}
					}
				}
			}
		}
	}
	
	out << ans << '\n';
}
