#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int exit[26];
	char word[100];

	for (int i = 0; i < 26; i++) {
		exit[i] = -1;
	}
	scanf("%s", word);
	int len = strlen(word);
	
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 27; j++) {
			if (word[i] == alphabet[j]){
				if(exit[j] == -1)
					exit[j] = i;
			}
		}		
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", exit[i]);
	}
	return 0;
}