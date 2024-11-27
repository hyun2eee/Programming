#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int submission;
	int desubmission[2] = { 0 };
	int student[31] = { 0 };


	for (int i = 0; i < 28; i++) {
		scanf("%d", &submission); 
		++student[submission];
		}

	int k = 0;

	 for (int i = 1; i < 31; i++) {
		if (student[i] == 0) {
			desubmission[k] = i;
			++k;
		}
	}
	if (desubmission[0] > desubmission[1]) {
		printf("%d\n", desubmission[1]);
		printf("%d", desubmission[0]);
	}
	else {
		printf("%d\n", desubmission[0]);
		printf("%d", desubmission[1]);
	}
	return 0;
}