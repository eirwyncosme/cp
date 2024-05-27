#include <bits/stdc++.h>

using namespace std;
using P = pair<int, int>;


int main(void)
{
	int N; cin >> N;
	vector<P> towns(N);
	for (auto& x: towns) cin >> x.first >> x.second;
	vector<int> paths(N);
	for (int i = 0; i < N; i++) paths[i] = i;

	sort(towns.begin(), towns.end());
	vector<double> dists;
	do {
		double d = 0;
		for (int i = 0; i < N - 1; i++) {
			P p1 = towns[i], p2 = towns[i + 1];
			d += sqrt(pow(p1.first - p2.first, 2) + pow(p1.second - p2.second, 2));
		}
		dists.push_back(d);
	} while (next_permutation(towns.begin(), towns.end()));

	double avg = 0;
	for (auto x: dists) avg += x;
	avg /= dists.size();
	cout << fixed << setprecision(16) << avg << endl;
}
