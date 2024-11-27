#include <stdio.h>
#include <string.h>

int main() {
	char word[101];
	fgets(word, sizeof word, stdin);
	if (word [strlen(word) - 1] == '\n')
		word [strlen(word) - 1] = '\0';
	int len = strlen(word);
	printf("%d", len);
	return 0;
}