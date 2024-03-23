/*
ID: eirwync1
LANG: C++
PROG: friday
*/

#include <bits/stdc++.h>

using namespace std;


bool isLeapYear(int year)
{
	if (year % 400 == 0) return true;
	else if (year % 100 == 0) return false;
	else if (year % 4 == 0) return true;
	return false;
}


int getDays(int year, int month)
{ // 2 4 6 9 11
	int a[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2) return a[1] + isLeapYear(year);

	return a[month - 1];
}


int main()
{
	ifstream in("friday.in");
	ofstream out("friday.out");

	int years;
	in >> years;

	/* Weekday */
	int wd = 0;
	vector<int> v(7);

	/* Year loop */
	for (int i = 1900; i < 1900 + years; i++) {
		/* Month loop */
		for (int j = 1; j <= 12; j++) {
			wd = (wd + 12) % 7;
			v[wd]++;
			wd = (wd + getDays(i, j) - 12) % 7;
		}
	}

	/* Print in 'correct' order */
	for (int i = 5; i < 7; i++) {
		if (i != 5) out << " ";
		out << v[i];
	}
	for (int i = 0; i < 5; i++) {
		out << " " << v[i];
	}

	out << "\n";

	in.close();
	out.close();
}

