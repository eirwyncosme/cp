#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int nums[4];
	for (int i = 0; i < 4; i++) {
		char ch;
		cin >> ch;
		nums[i] = ch - '0';
	}

	for (int bits = 0; bits < (1 << 3); bits++) {
		int sum = nums[0];
		for (int i = 0; i < 3; i++) {
			sum += (bits & (1 << i)) ? nums[i + 1] : -nums[i + 1];
		}

		if (sum == 7) {
			cout << nums[0] << ((bits & 1) ? '+' : '-')
				<< nums[1] << ((bits & 2) ? '+' : '-')
				<< nums[2] << ((bits & 4) ? '+' : '-')
				<< nums[3] << "=7\n";
			break;
		}
	}
}
