#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N; cin >> N;
	int mi = 1<<31 - 1, ma = -(1<<31 - 1);
	long s = 0;
	for (int i = 0; i < N; i++) {
		int x; cin >> x;
		mi = min(mi, x);
		ma = max(ma, x);
		s += x;
	}

	cout << mi << " " << ma << " " << s << endl;
}
