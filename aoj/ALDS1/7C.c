#include <stdio.h>


typedef struct {
	int parent, left, right;
} bt;
bt tree[25];

void preorder(int i)
{
	if (i == -1) return;

	printf(" %d", i);

	preorder(tree[i].left);
	preorder(tree[i].right);
}

void inorder(int i)
{
	if (i == -1) return;
	inorder(tree[i].left);

	printf(" %d", i);

	inorder(tree[i].right);
}

void postorder(int i)
{
	if (i == -1) return;

	postorder(tree[i].left);
	postorder(tree[i].right);

	printf(" %d", i);
}

int main(void)
{
	int n;
	scanf("%d\n", &n);

	for (int i = 0; i < n; i++) {
		tree[i].parent = -1;
		tree[i].left = -1;
		tree[i].right = -1;
	}

	for (int i = 0; i < n; i++) {
		int id, left, right;
		scanf("%d %d %d", &id, &left, &right);
		tree[id].left = left;
		tree[id].right = right;
		if (left != -1) tree[left].parent = id;
		if (right != -1) tree[right].parent = id;
	}

	int root;
	for (int i = 0; i < n; i++) {
		if (tree[i].parent == -1) { root = i; break; }
	}


	printf("Preorder\n");
	preorder(root);
	printf("\nInorder\n");
	inorder(root);
	printf("\nPostorder\n");
	postorder(root);
	printf("\n");

	return 0;
}
