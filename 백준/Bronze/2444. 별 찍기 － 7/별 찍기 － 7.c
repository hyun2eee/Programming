#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int N; 
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int a = N; a > i+1; a--) {
			printf(" ");
		}
		for (int j = 0; j < i+1; j++) {
			printf("*");
			if (j != 0)
				printf("*");
		}
		printf("\n");
	}
		for (int i = N; i > 1; i--) {
			for (int a = i; a < N+1; a++) {
				printf(" ");
			}
			for (int j = i-1 ; j > 0; j--) {
				printf("*");
				if (j != 1) {
					printf("*");
				}
			}
			printf("\n");
		}	
	return 0;
}
    