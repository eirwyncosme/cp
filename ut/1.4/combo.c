/*
ID: eirwync1
LANG: C
PROG: combo
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


bool ok(int *a, int *b, int n)
{
	for (int i = 0; i < 3; i++) {
		int ab = abs(a[i] - b[i]); if (ab > 2 && ab < n - 2) return false;
	}
	return true;
}

int main(void)
{
	FILE *in = fopen("combo.in", "r");        
	FILE *out = fopen("combo.out", "w");        

	int n, f[3], m[3];
	fscanf(in, "%d\n", &n);
	fscanf(in, "%d %d %d\n", &f[0], &f[1], &f[2]);
	fscanf(in, "%d %d %d\n", &m[0], &m[1], &m[2]);

	fclose(in);

	int ans = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				int b[] = {i, j, k};
				if (ok(f, b, n) || ok(m, b, n)) ans++;
			}
		}
	}

	fprintf(out, "%d\n", ans);
	fclose(out);

	return EXIT_SUCCESS;
}
