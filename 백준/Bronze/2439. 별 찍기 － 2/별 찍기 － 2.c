#include <stdio.h>

int main() {

	int N;
	scanf("%d", &N);

	for (int i = 1; i < N + 1; i++) {
		for (int j = N; j > i; j--) {
			printf(" ");
		}
		for (int k = 1; k < i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}