#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char word[100];
	scanf("%s", word);
	int len = strlen(word);
	int p = 1;

	for (int i = 0; i < (len / 2); i++) {

		if (word[i] != word[len - 1 - i]) {
			p = 0;
			}
		}
	if (len == 1) {
		p = 1; 
	}
		printf("%d", p);

	return 0;
}
    