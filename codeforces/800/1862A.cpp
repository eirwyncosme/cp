#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int cases;
	cin >> cases;

	for (int i = 0; i < cases; i++) {
		int rows, columns;
		cin >> rows >> columns;
		
		vector<vector<char>> carpet;
		for (int i = 0; i < columns; i++) carpet.push_back({});
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {
				char ch;
				cin >> ch;
				carpet[j].push_back(ch);
			}
		}


		int current = 0;
		char chs[] = {'v', 'i', 'k', 'a'};
		for (int i = 0; i < columns; i++) {
			if (current > 3) break;
			if (find(carpet[i].begin(), carpet[i].end(), chs[current]) != carpet[i].end()) {
				current++;
			}
		}
		cout << ((current > 3) ? "YES" : "NO") << "\n";
	}
}
