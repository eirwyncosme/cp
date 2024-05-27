#include <bits/stdc++.h>

using namespace std;


int main(void)
{
	int N; cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A[i];

	for (int i = 0; i < N; i++) {
		int key = A[i];
		int j = i - 1;
		while (j >= 0 && A[j] > key) {
			A[j + 1] = A[j];
			j--;
		}

		A[j + 1] = key;
		
		for (int j = 0; j < N; j++) {
			if (j) cout << " ";
			cout << A[j];
		}
		cout << endl;
	}
}
