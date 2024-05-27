#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct dlist {
	struct dlist *prev, *next;
	int val;
} dlist;

dlist *start = NULL;
dlist *end = NULL;

void init(int v)
{
	start = malloc(sizeof(dlist));
	start->prev = NULL;
	start->next = NULL;
	start->val = v;
	end = start;
}

void insert(int v)
{
	dlist *tmp = start;
	start->prev = malloc(sizeof(dlist));
	start = start->prev;
	start->prev = NULL;
	start->next = tmp;
	start->val = v;
}

dlist *searchList(int v)
{
	dlist *tmp = start;
	while (tmp != NULL && tmp->val != v) {
		tmp = tmp->next;
	}
	return tmp;
}

void delete(int v)
{
	dlist *to_del = searchList(v);
	if (to_del == NULL) return;

	if (to_del->prev != NULL) to_del->prev->next = to_del->next;
	if (to_del->next != NULL) to_del->next->prev = to_del->prev;

	if (to_del == start) {
		start = to_del->next;
		start->prev = NULL;
	}
	if (to_del == end) {
		end = to_del->prev;
		end->next = NULL;
	}

	free(to_del);
}

void deleteFirst(void)
{
	/* Only element in list */
	if (start->next == NULL) {
		free(start);
		start = NULL;
		end = NULL;
	} else {
		start = start->next;
		free(start->prev);
		start->prev = NULL;
	}
}

void deleteLast(void)
{
	if (end->prev == NULL) {
		free(end);
		start = NULL;
		end = NULL;
	} else {
		end = end->prev;
		free(end->next);
		end->next = NULL;
	}
}

void printList(void)
{
	dlist *tmp = start;
	bool gone = false;
	while (tmp != NULL) {
		if (gone) printf(" ");
		printf("%d", tmp->val);
		gone = true;
		tmp = tmp->next;
	}
	printf("\n");
}

int main(void)
{
	int N;
	scanf("%d", &N);

	char s[20];	
	for (int i = 0; i < N; i++) {
		scanf("%s", s);

		if (s[0] == 'i') {
			int v;
			scanf("%d", &v);
			if (start == NULL) init(v);
			else insert(v);
		} else if (s[6] == 'L') {
			deleteLast();
		} else if (s[6] == 'F') {
			deleteFirst();
		} else {
			int v;
			scanf("%d", &v);
			delete(v);
		}
		//printList();
	}

	printList();
}
