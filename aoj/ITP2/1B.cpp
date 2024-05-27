#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int q; cin >> q;
	deque<int> dq;
	for (int i = 0; i < q; i++) {
		int t; cin >> t;
		if (t == 0) {
			int d, x; cin >> d >> x;
			if (d == 0) dq.push_front(x);
			else dq.push_back(x);
		} else if (t == 1) {
			int p; cin >> p;
			cout << dq[p] << endl;
		} else {
			int d; cin >> d;
			if (d == 0) dq.pop_front();
			else dq.pop_back();
		}
	}

	return 0;
}
