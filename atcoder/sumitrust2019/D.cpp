#include <bits/stdc++.h>

using namespace std;


int N;
string S;

bool valid(vector<int> v)
{
	int c = 0;
	for (int i = 0; i < N; i++) {
		if (S[i] - '0' == v[c]) c++;
		if (c == 3) break;
	}
	return c == 3;
}

int main(void)
{
	cin >> N;
	cin >> S;

	set<int> SS;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				if (valid({i, j, k})) {
					SS.insert(i * 100 + j * 10 + k);
				}
			}
		}
	}

	cout << SS.size() << endl;
}
