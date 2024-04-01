#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int sx, sy, tx, ty;
	cin >> sx >> sy >> tx >> ty;
	int dx = tx - sx;
	int dy = ty - sy;

	cout << string(dx, 'R') << string(dy, 'U');
	cout << string(dx, 'L') << string(dy, 'D');
	cout << 'D' << string(dx + 1, 'R') << string(dy + 1, 'U') << 'L';
	cout << 'U' << string(dx + 1, 'L') << string(dy + 1, 'D') << 'R';
	cout << endl;
}
