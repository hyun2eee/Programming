#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int han_number(int i) {


	if (i < 100) {
		int han;
		han = i;
		return han;
	}
	else if (i == 1000) {
		int han = 144;
		return han;
	}
	else {
		int han = 99;
		for (int k = 100; k < i + 1; k++) {

			int num1 = k % 10; //1의 자리
			int num2 = (k % 100) / 10; //10의자리
			int num3 = (k % 1000) / 100; //100의자리

				if ((num1 - num2) == (num2 - num3)) {
					++han;
				}
			}

		return han;
	}
}

int main() {

	int i;
	scanf("%d", &i);

	printf("%d", han_number(i));

	return 0;
}