#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	string W;
	cin >> W;

	vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
	for (char ch: W) {
		if (ranges::find(vowels, ch) != vowels.end()) continue;
		cout << ch;
	}
	cout << endl;
}
