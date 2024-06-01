#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	freopen("moosick.in", "r", stdin);
	freopen("moosick.out", "w", stdout);

	int N; cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A[i];
	int C; cin >> C;
	vector<int> B(C);
	for (int i = 0; i < C; i++) cin >> B[i];
	sort(B.begin(), B.end());

	vector<int> anss;
	for (int i = 0; i < N - C + 1; i++) {
		vector<int> sub(A.begin() + i, A.begin() + i + C);
		sort(sub.begin(), sub.end());
		bool ok = true;
		int d = sub[0] - B[0];
		for (int j = 0; j < C; j++) {
			if (sub[j] - B[j] != d) {
				ok = false;
				break;
			}
		}
		if (ok) anss.push_back(i + 1);
	}

	cout << anss.size() << endl;
	for (int i = 0; i < anss.size(); i++) cout << anss[i] << endl;
}
