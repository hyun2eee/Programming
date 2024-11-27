#include <stdio.h>

int main() {

	int i, j, N;
    scanf("%d", &N);

	for (i = 1; i < N+1; i++) {
		for (j = 1; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}