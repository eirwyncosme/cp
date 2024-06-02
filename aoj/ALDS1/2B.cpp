#include <bits/stdc++.h>

using namespace std;

int N;
vector<int> A(100);
int c = 0;


void selection_sort(void)
{
	for (int i = 0; i < N; i++) {
		int mind = i;
		for (int j = i + 1; j < N; j++) {
			if (A[j] < A[mind]) mind = j;
		}
		swap(A[i], A[mind]);
		c += i != mind;
	}
}

int main(void)
{
	cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i];
	selection_sort();
	for (int i = 0; i < N; i++) {
		if (i) cout << " ";
		cout << A[i];
	}
	cout << endl << c << endl;
}
