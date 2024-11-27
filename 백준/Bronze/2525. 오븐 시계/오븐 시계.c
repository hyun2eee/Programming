#include <stdio.h>


int main()
{
	int a, b, c;
	int i, j;

	scanf("%d %d", &a, &b);
	scanf("%d", &c);

	i = c / 60;
	j = c % 60;

	if (b + j >= 60) {

		a = a + i + ((j+b)/60);
		b = (b + j)%60;
        
		if (a >= 24) {
			a = a - 24 ;
		}
		printf("%d %d", a, b);
	}
	else {
		a = a + i ;
		b = b + j ;
		if (b == 60) {
			b = 0;
			a += 1;
		}
		if (a >= 24) {
			a = a-24;
		}
		printf("%d %d", a, b);
	}
	return 0;
}