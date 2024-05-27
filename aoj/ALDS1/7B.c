#include <stdio.h>


typedef struct {
	int parent, left, right, depth, height;
} bst;
int n;
bst tree[25];

int max(int a, int b) { return (a > b) ? a : b; }

int dfs(int i)
{
	if (i == -1) return 1;
	return max(dfs(tree[i].left), dfs(tree[i].right)) + 1;
}

int get_sibling(int i)
{
	if (tree[i].parent == -1) return -1;
	if (tree[tree[i].parent].left == i) return tree[tree[i].parent].right;
	return tree[tree[i].parent].left;
}

int get_deg(int i)
{
	int c = 0;
	c += tree[i].left != -1;
	c += tree[i].right != -1;
	return c;
}

const char *classify(int i)
{
	if (tree[i].parent == -1) return "root";
	if (tree[i].left == -1 && tree[i].right == -1) return "leaf";
	return "internal node";
}

int main(void)
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		tree[i].parent = -1;
		tree[i].left = -1;
		tree[i].right = -1;
		tree[i].depth = -1;
		tree[i].height = -1;
	}

	for (int i = 0; i < n; i++) {
		int id, left, right;
		scanf("%d %d %d", &id, &left, &right);
		tree[id].left = left;
		tree[id].right = right;
		if (left != -1) tree[left].parent = id;
		if (right != -1) tree[right].parent = id;
	}

	for (int i = 0; i < n; i++) {
		int c = i;
		tree[i].depth = 0;
		while (tree[c].parent != -1) {
			tree[i].depth++;
			c = tree[c].parent;
		}
		tree[i].height = dfs(i) - 2;
	}

	for (int i = 0; i < n; i++) {
		printf("node %d: parent = %d, sibling = %d, degree = %d", i,
				tree[i].parent, get_sibling(i), get_deg(i));
		printf(", depth = %d, height = %d, %s\n", tree[i].depth,
				tree[i].height, classify(i));
	}
}
