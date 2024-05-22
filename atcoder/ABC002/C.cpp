#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	float a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	float s1 = (c - a) * (f - b);
	float s2 = (e - a) * (d - b);
	cout << fixed << abs(s1 - s2) / 2. << endl;
}
