#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	int num = 0;
	int R = 0;
	char S[20];

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
	
		scanf("%d %s", &R, S);

		for (int j = 0; j < strlen(S); j++) {
			for (int k = 0; k < R; k++) {
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}
	return 0;
}