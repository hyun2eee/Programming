#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int h, m;
	scanf("%d %d", &h, &m);

	if (m >= 45) {
		m = m - 45;
		printf("%d %d", h, m);
	}
	else if (h == 0) {
		h = 23;
		m = m + 15;
		printf("%d %d", h, m);
	}
	
	else {
		h = h - 1;
		m = m + 15;
		printf("%d %d", h, m);
	}
	return 0;
}