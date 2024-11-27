#include <stdio.h>

int main() {
	
	int M, N;
	int i, j, k;
	scanf("%d %d", &N, &M);
	int bags[100] = { 0 };

	for (int b = 0; b < M; b++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int a = 0; a < j - i + 1; a++) {
			for (int c = i-1; c < j; c++) {
				bags[c] = k;
			}
		}
	}
	for (int a = 0; a < N; a++) {
		printf("%d ", bags[a]);
	}
	return 0;
}