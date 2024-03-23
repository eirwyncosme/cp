/*
ID: eirwync1
LANG: C++
PROG: namenum
*/

#include <bits/stdc++.h>

using namespace std;


/* Order matters */
map<char, vector<string>> keymap = {
	{'2', { "A", "B", "C" }},
	{'3', { "D", "E", "F" }},
	{'4', { "G", "H", "I" }},
	{'5', { "J", "K", "L" }},
	{'6', { "M", "N", "O" }},
	{'7', { "P", "R", "S" }},
	{'8', { "T", "U", "V" }},
	{'9', { "W", "X", "Y" }},
};

vector<string> vn(4617);
vector<string> ns;

void gen(string name, string code, int i = 0)
{
	if (i == code.length()) {
		for (const string& v : vn) {
			if (name == v) {
				ns.push_back(name);
			}
		}
		return;
	}

	for (const string& ch : keymap[code[i]]) {
		string t = name + ch;
		for (const string& v : vn) {
			if (v.find(t, 0) == 0) {
				gen(t, code, i + 1);
				break;
			}
		}
	}
}

int main(void)
{
	ifstream nd("dict.txt");
	ifstream in("namenum.in");
	ofstream out("namenum.out");

	for (int i = 0; i < 4617; i++) nd >> vn[i];

	string code;
	in >> code;

	gen("", code);

	if (ns.empty()) out << "NONE\n";
	else {
		for (auto x: ns) {
			out << x << '\n';
		}
	}
}
