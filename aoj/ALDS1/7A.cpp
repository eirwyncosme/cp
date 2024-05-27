#include <bits/stdc++.h>

using namespace std;

typedef struct {
	int parent = -1;
	int depth = 0;
	vector<int> children;
} node;

string classify(node& n)
{
	if (n.parent == -1) return "root";
	if (n.children.size() > 0) return "internal node";
	return "leaf";
}

string list_children(node& n)
{
	string r = "";
	for (int i = 0; i < n.children.size(); i++) {
		if (i) r += ", ";
		r += to_string(n.children[i]);
	}
	return r;
}

int main(void)
{
	int n; cin >> n;
	vector<node> AL(n);

	for (int i = 0; i < n; i++) {
		int id, k; cin >> id >> k;
		AL[id].children.resize(k);
		for (int i = 0; i < k; i++) {
			int c; cin >> c;
			AL[id].children[i] = c;
			AL[c].parent = id;
		}
	}

	for (int i = 0; i < n; i++) {
		int c = i;
		while (AL[c].parent != -1) {
			AL[i].depth++;
			c = AL[c].parent;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << "node " << i
			<< ": parent = " << AL[i].parent
			<< ", depth = " << AL[i].depth
			<< ", " << classify(AL[i])
			<< ", [" << list_children(AL[i]) << "]\n";
	}
}
