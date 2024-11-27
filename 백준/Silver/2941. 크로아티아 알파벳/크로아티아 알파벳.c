#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int croatia_alphabet = 0;
	char sen[100];

    scanf("%s", sen);
	int len = strlen(sen);

    for (int i = 0; i < len; i++) {

		if ((sen[i] == 'c') && (sen[i + 1] == '=')) {
			croatia_alphabet++;
			i++;
		}
		else if ((sen[i] == 'c') && (sen[i + 1] == '-')) {
			croatia_alphabet++;
			i++;
		}
		else if ((sen[i] == 'd') && (sen[i + 1] == 'z') && (sen[i + 2] == '=')) {
			croatia_alphabet++;
			i = i + 2;
		}
		else if ((sen[i] == 'd') && (sen[i + 1] == '-')) {
			croatia_alphabet++;
			i++;
		}
		else if ((sen[i] == 'l') && (sen[i + 1] == 'j')) {
			croatia_alphabet++;			
			i++;
		}
		else if ((sen[i] == 'n') && (sen[i + 1] == 'j')) {
			croatia_alphabet++;
			i++;
		}
		else if ((sen[i] == 's') && (sen[i + 1] == '=')) {
			croatia_alphabet++;
			i++;
		}
		else if ((sen[i] == 'z') && (sen[i + 1] == '=')) {
			croatia_alphabet++;
			i++;
		}
		else {
			croatia_alphabet++;
		}
	}
	printf("%d", croatia_alphabet);
	return 0;
}