#include <stdio.h>


int main(void)
{
	int m;
	scanf("%d", &m);

	if (m < 100) {
		printf("00\n");
		return 0;
	} else if (m <= 5000) {
		m /= 100;
	} else if (m >= 6000 && m <= 30000) {
		m /= 1000; m += 50;
	} else if (m >= 35000 && m <= 70000) {
		m /= 1000;
		m -= 30;
		m /= 5;
		m += 80;
	} else {
		m = 89;
	}

	printf("%02d\n", m);

	return 0;
}
