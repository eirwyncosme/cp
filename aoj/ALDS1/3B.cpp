#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int n, q; cin >> n >> q;
	queue<pair<string, int>> que;
	for (int i = 0; i < n; i++) {
		string s;
		int k;
		cin >> s >> k;
		que.push({s, k});
	}

	int time = 0;
	while (1) {
		if (que.empty()) break;
		pair<string, int> P = que.front(); que.pop();
		if (P.second <= q) {
			time += P.second;
			cout << P.first << " " << time << endl;
		} else {
			time += q;
			P.second -= q;
			que.push(P);
		}
	}

	return 0;
}
