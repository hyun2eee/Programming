#include <stdio.h>

int main() {

	int X, N, a, b,i;
	int sum = 0;

	scanf("%d %d", &X,&N);

	for (i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		sum += (a*b);
	}
	if (X == sum) {
		printf("Yes");
	}
	else 
        printf("No");

	return 0;
}