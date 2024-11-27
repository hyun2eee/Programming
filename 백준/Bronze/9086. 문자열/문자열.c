#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char word[101];
	int a ;

	scanf("%d", &a);

	for (int i = 0; i < a; i++) {

		scanf("%s",word);
		int len = strlen (word);

		printf("%c%c\n", word[0], word[len - 1]);

	}
	return 0;
}