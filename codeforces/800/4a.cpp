#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	cout << ((n % 2 || n <= 2) ? "NO" : "YES") << "\n";
}
