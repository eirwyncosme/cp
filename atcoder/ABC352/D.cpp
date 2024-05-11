/* From editorial */
#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N, K;
	cin >> N >> K;
	vector<int> locs(N);
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		locs[x - 1] = i;
	}

	set<int> s;
	for (int i = 0; i < K; i++) {
		s.insert(locs[i]);
	}

	/* s.end() returns s.rbegin() + 1 */
	int ans = *s.rbegin() - *s.begin();
	/* 1..K, 2..K+1, ...*/
	for (int i = K; i < N; i++) {
		s.erase(locs[i - K]);
		s.insert(locs[i]);
		ans = min(ans, *s.rbegin() - *s.begin());
	}

	cout << ans << endl;
}
