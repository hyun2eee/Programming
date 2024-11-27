#include <stdio.h>

int main() {
	
	int M, N, i, j;
	int bags[101];
	int back[101]={0};

	scanf("%d %d", &N, &M);

	for (int a = 0; a < 101; a++) {
		bags[a] = a ;
	}

	for (int b = 0; b < M; b++) {
		scanf("%d %d", &i, &j);
		int d = 1;
		for (int a = j; a > i - 1; a--) {
			back[d] = bags[a]; d++;
		}
		d = 1;
		for (int c = i; c < j + 1; c++) {
			bags[c] = back[d]; d++;
		}
	}
	for (int a = 1; a < N+1; a++) {
		printf("%d ", bags[a]);
	}
	return 0;
}