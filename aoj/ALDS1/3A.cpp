#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	stack<int> s;
	string i;
	while (cin >> i) {
		if ('0' <= i[0] && i[0] <= '9') {
			s.push(stoi(i));
			continue;
		}

		int r = s.top(); s.pop();
		int l = s.top(); s.pop();
		if (i == "+") {
			s.push(l + r);
		} else if (i == "-") {
			s.push(l - r);
		} else if (i == "*") {
			s.push(l * r);
		}
	}

	cout << s.top() << endl;
}
