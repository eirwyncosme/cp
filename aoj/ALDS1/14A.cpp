#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	string T, P; cin >> T >> P;
	for (int i = 0; i + P.size() <= T.size(); i++) {
		if (T.substr(i, P.size()) == P) cout << i << endl;
	}
	
	return 0;
}
