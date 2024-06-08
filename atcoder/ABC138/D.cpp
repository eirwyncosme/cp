#include <bits/stdc++.h>

#define MAX_N	200000

using namespace std;
using ll = long long;

vector<ll> scores(MAX_N);
vector<int> es[MAX_N];
vector<bool> went(MAX_N);


void dfs(int p, int prev)
{
	went[p] = true;
	if (prev != -1) scores[p] += scores[prev];
	for (auto n: es[p]) {
		if (went[n] || n == p) continue;
		dfs(n, p);
	}
}

int main(void)
{
	int N, Q; cin >> N >> Q;
	for (int i = 0; i < N - 1; i++) {
		int a, b; cin >> a >> b;
		/* after_contest_15 through 17 don't seem to count though... */
		es[a - 1].push_back(b - 1);
		es[b - 1].push_back(a - 1);
	}

	for (int i = 0; i < Q; i++) {
		int p, x; cin >> p >> x;
		scores[p - 1] += x;
	}

	dfs(0, -1);

	for (int i = 0; i < N; i++) {
		cout << scores[i] << " ";
	}
	cout << endl;
}


