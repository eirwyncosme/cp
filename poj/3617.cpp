/* Presentation error */
#include <vector>
#include <string>
#include <iostream>

using namespace std;


int main(void)
{
	int n;
	cin >> n;

	vector<char> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	string ans = "";
	int l = 0;
	int r = n - 1;

	while (l <= r) {
		bool left = true;
		for (int i = 0; l + i <= r; i++) {
			if (v[l + i] < v[r - i]) break;
			if (v[l + i] > v[r - i]) {
				left = false;
				break;
			}
		}

		if (left) {
			ans += v[l];
			l++;
		} else {
			ans += v[r];
			r--;
		}
	}

	cout << ans << '\n';
}
