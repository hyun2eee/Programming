#include<stdio.h>

int main() {

	int num, num1, num2,num3 = 0;
	int cycle = 0;

	scanf("%d", &num);
	num1 = num;

	for (;;) {

		num2 = (num1 % 10) + (num1 / 10);
		num3 = (num1 % 10 * 10) + num2 % 10;
		++cycle;

		if (num == num3)
				break;
		else {
			num1 = num3;
			num2 = 0; 
			num3 = 0;
	
			continue;
		}
	}
		printf("%d", cycle);
	
	return 0;
}