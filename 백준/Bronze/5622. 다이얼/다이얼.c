#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char word[15];
	char put[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int time = 0;
	
	scanf("%[^\n]", word);

	for (int i = 0; i < strlen(word); i++) {
		if (word[i] == put[0] || word[i] == put[1] || word[i] == put[2]) {
			time = time + 3;
		}
		else if (word[i] == put[3] || word[i] == put[4] || word[i] == put[5]) {
			time = time + 4;
		}
		else if (word[i] == put[6] || word[i] == put[7] || word[i] == put[8]) {
			time = time + 5;
		}
		else if (word[i] == put[9] || word[i] == put[10] || word[i] == put[11]) {
			time = time + 6;
		}
		else if (word[i] == put[12] || word[i] == put[13] || word[i] == put[14]) {
			time = time + 7;
		}
		else if (word[i] == put[15] || word[i] == put[16] || word[i] == put[17] || word[i] == put[18]) {
			time = time + 8;
		}
		else if (word[i] == put[19] || word[i] == put[20] || word[i] == put[21]) {
			time = time + 9;
		}
		else if (word[i] == put[22] || word[i] == put[23] || word[i] == put[24] || word[i] == put[25]) {
			time = time + 10;
		}
	}

	printf("%d", time);
	return 0;
}