#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int i,j,k,size;
	int score = 0;
	int sum = 0;
	char arr[80] = {0};

	scanf("%d", &size);

	for (i = 0; i < size; i++) {

		scanf("%s", arr);
		sum = 0;
		score = 0;
	
		for (j = 0; j < 80; j++) {

			if (arr[j] == 'O') {
				++score;
				sum += score;
			}
			if (arr[j] == 'X') {
				score = 0;
			}
		}
		printf("%d\n", sum);

		for (k = 0; k < 80; k++) {
			arr[k] = 0;
		}
	}
	return 0;
}