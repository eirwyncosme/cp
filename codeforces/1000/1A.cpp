#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	double n, m, a;
	cin >> n >> m >> a;
	cout << static_cast<long long>(ceil(n / a)) * static_cast<long long>(ceil(m / a))
		<< "\n";
}
