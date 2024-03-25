#include <bits/stdc++.h>

using namespace std;


void solve(void)
{
	int n;
	cin >> n;
	vector<int> v(n);
	int sum = 0;
	for (auto& x: v) {
		cin >> x;
		sum += x;
	}

	/* Try all possible hours, smallest is answer */
	for (int div = 0; div <= sum; div++) {
		/* Not divisible */
		if (div && sum % div) continue;

		int psum = 0;
		bool valid = true;
		for (auto& x: v) {
			psum += x;
			if (psum == div) psum = 0;
			else if (psum > div) {
				valid = false;
				break;
			}
		}

		if (valid) {
			if (!div) cout << "0\n";
			else cout << n - sum / div << '\n';
			break;
		}
	}
}

int main(void)
{
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
