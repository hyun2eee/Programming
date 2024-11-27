#include <stdio.h>

int main() {
	
	int M, N;
	int i, j;
	
	scanf("%d %d", &N, &M);
	int bags[101];

	for (int a = 0; a < 101; a++) {
		bags[a] = a;
	}

	for (int b = 0; b < M; b++) {
		scanf("%d %d", &i, &j);
		int temp = 0;
		temp = bags[i];
		bags[i] = bags[j];
		bags[j] = temp;
		}
	for (int a = 1; a < N+1; a++) {
		printf("%d ", bags[a]);
	}
	return 0;
}