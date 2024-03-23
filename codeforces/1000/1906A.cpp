/* Finally solved this damn problem */
#include <bits/stdc++.h>


using namespace std;


/* Recursively get the best path */
string solve(vector<vector<char>> g, int i, int j, int l = 2, vector<pair<int, int>> went = {})
{
	/* Crashes on corner */
	if (l == 0) return "";

	if (l == 2) went.push_back(make_pair(i, j));

	vector<pair<int, int>> backup = went;
	/* None match = always go to end */
	vector<string> res = {"CCC"};

	/* Smallest */
	char sm = 'C';

	if (i != 0 && g[i - 1][j] <= sm && (find(went.begin(), went.end(), make_pair(i - 1, j)) == went.end())) {
		sm = g[i - 1][j];
		went.push_back(make_pair(i - 1, j));
		res.push_back(g[i - 1][j] + solve(g, i - 1, j, l - 1, went));
	}
	went = backup;
	if (j != 0 && g[i][j - 1] <= sm && (find(went.begin(), went.end(), make_pair(i, j - 1)) == went.end())) {
		sm = g[i][j - 1];
		went.push_back(make_pair(i, j - 1));
		res.push_back(g[i][j - 1] + solve(g, i, j - 1, l - 1, went));
	}
	went = backup;
	if (i != 2 && g[i + 1][j] <= sm && (find(went.begin(), went.end(), make_pair(i + 1, j)) == went.end())) {
		sm = g[i + 1][j];
		went.push_back(make_pair(i + 1, j));
		res.push_back(g[i + 1][j] + solve(g, i + 1, j, l - 1, went));
	}
	went = backup;
	if (j != 2 && g[i][j + 1] <= sm && (find(went.begin(), went.end(), make_pair(i, j + 1)) == went.end())) {
		sm = g[i][j + 1];
		went.push_back(make_pair(i, j + 1));
		res.push_back(g[i][j + 1] + solve(g, i, j + 1, l - 1, went));
	}
	went = backup;


	if (i != 0 && j != 0 && g[i - 1][j - 1] <= sm && (find(went.begin(), went.end(), make_pair(i - 1, j - 1)) == went.end())) {
		sm = g[i - 1][j - 1];
		went.push_back(make_pair(i - 1, j - 1));
		res.push_back(g[i - 1][j - 1] + solve(g, i - 1, j - 1, l - 1, went));
	}
	went = backup;
	if (i != 0 && j != 2 && g[i - 1][j + 1] <= sm && (find(went.begin(), went.end(), make_pair(i - 1, j + 1)) == went.end())) {
		sm = g[i - 1][j + 1];
		went.push_back(make_pair(i - 1, j + 1));
		res.push_back(g[i - 1][j + 1] + solve(g, i - 1, j + 1, l - 1, went));
	}
	went = backup;
	if (i != 2 && j != 2 && g[i + 1][j + 1] <= sm && (find(went.begin(), went.end(), make_pair(i + 1, j + 1)) == went.end())) {
		sm = g[i + 1][j + 1];
		went.push_back(make_pair(i + 1, j + 1));
		res.push_back(g[i + 1][j + 1] + solve(g, i + 1, j + 1, l - 1, went));
	}
	went = backup;
	if (i != 2 && j != 0 && g[i + 1][j - 1] <= sm && (find(went.begin(), went.end(), make_pair(i + 1, j - 1)) == went.end())) {
		sm = g[i + 1][j - 1];
		went.push_back(make_pair(i + 1, j - 1));
		res.push_back(g[i + 1][j - 1] + solve(g, i + 1, j - 1, l - 1, went));
	}
	went = backup;

	sort(res.begin(), res.end());
	return res[0];
}


int main(void)
{
	vector<vector<char>> g(3, vector<char>(3));
	char sm = 'C';

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> g[i][j];

			if (g[i][j] < sm) sm = g[i][j];
		}
	}


	vector<string> anss;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (g[i][j] == sm) {
				anss.push_back(solve(g, i, j));
			}
		}
	}
	sort(anss.begin(), anss.end());

	cout << sm + anss[0] << "\n";
}
