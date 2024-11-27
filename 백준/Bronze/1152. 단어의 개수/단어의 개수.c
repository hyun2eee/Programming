#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char word[1000000];
	
	scanf("%[^\n]", word);
	int len = strlen(word);
	int p = 1;

	for (int i = 0; i < len; i++) {
		if (word[i] == ' ') {
			p++;
		}
	
	}
	if (word[0] == ' ') {
		p--;
	}

	if(len == 1)
		if (len == ' ') {
			printf("0");
		}

	if (word[len - 1] == ' ') {
		p--;
	}

	printf("%d", p);

	return 0;
}