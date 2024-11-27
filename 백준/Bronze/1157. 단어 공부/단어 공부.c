#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	char input[1000000];
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int freq[52] = { 0 ,0 };
	int max = 0;
	int large = 26;

	scanf("%s", input);
	int len = strlen(input);

	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 52; j++) {
			if (input[i] == alpha[j]) {
				freq[j]++;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		freq[i] = freq[i] + freq[large];
		large++;
	}

	for (int i = 0; i < 26; i++) {
		if (freq[i] > max) {
			max = freq[i];
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max == freq[i])
			input[0] = alpha[i + 26];
	}
	for (int i = 0; i < 26; i++) {
		for (int j = 25; j > -1; j--) {
			if ((max == freq[i]) && (max == freq[j]) && (i != j)) {
				input[0] = '?';
			}
		}
	}
	if (input[0] == '?') {
		printf("?");
	}
	else
		printf("%c", input[0]);
	return 0;
}