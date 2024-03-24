#include <vector>
#include <iostream>

using namespace std;


int main(void)
{
	vector<int> ps(10000);
	ps[0] = 1;
	int am = 2;
	int c = 0;
	int last = 0;
	for (int i = 1; i < 10000; i++) {
		if (c == am) {
			c = 0;
			am++;
		}
		ps[i] = ps[i - 1] + am;
		c++;
	}

	int n;
	while (cin >> n) {
		if (!n) break;
		cout << n << " " << ps[n - 1] << '\n';
	}
}
