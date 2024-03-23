/*
ID: eirwync1
LANG: C
PROG: dualpal
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>


bool is_palindrome(const char* s)
{
	size_t l = strlen(s);
	
	int i = 0;
	for (int i = 0; i < l; i++) {
		if (s[i] != s[l - i - 1]) return false;
	}
	return true;
}

bool solve(int n)
{
	bool o = false;
	for (int i = 2; i <= 10; i++) {
		char s[100];
		int c = n;
		int j = 0;
		while (c) {
			s[j] = c % i + '0';
			c /= i;
			j++;
		}
		s[j] = '\0';

		bool pal = is_palindrome(s);
		if (o && pal) return true;
		if (pal) o = true;
	}
	return false;
}

int main(void)
{
	FILE *in = fopen("dualpal.in", "r");
	FILE *out = fopen("dualpal.out", "w");

	int n, s;
	fscanf(in, "%d %d\n", &n, &s);
	fclose(in);

	s += 1;

	while (n) {
		if (solve(s)) {
			fprintf(out, "%d\n", s);
			n--;
		}
		s++;
	}

	return EXIT_SUCCESS;
}
