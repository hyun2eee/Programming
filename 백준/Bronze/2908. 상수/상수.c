#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char word[8];
	
	scanf("%[^\n]", word);

	if (word[2] > word[6]) {
		printf("%c%c%c", word[2], word[1], word[0]);
	}

	else if (word[2] < word[6]) {
		printf("%c%c%c", word[6], word[5], word[4]);
	}

	else {
		if (word[1] > word[5]) {
			printf("%c%c%c", word[2], word[1], word[0]);
		}
		else if (word[1] < word[5]) {
			printf("%c%c%c", word[6], word[5], word[4]);
		}
		else  {
			if (word[0] > word[4]) {
				printf("%c%c%c", word[2], word[1], word[0]);
			}
			else {
				printf("%c%c%c", word[6], word[5], word[4]);
			}
		}
	}

	return 0;
}