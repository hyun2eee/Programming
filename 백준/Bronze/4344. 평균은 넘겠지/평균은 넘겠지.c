#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int case_num;
	float sum = 0;
	float score[1000] = { 0, };
	float score_num = 0;
	float average;
	float high_rank = 0;

	scanf("%d", &case_num);

	for (int i = 0; i < case_num; i++) {

		sum = 0;
		high_rank = 0;
		scanf("%f", &score_num);

		for (int j = 0; j < score_num; j++) {
			scanf("%f", &score[j]);
			sum += score[j];
		}
		average = (sum / score_num);

		for (int j = 0; j < score_num; j++) {
			if (score[j] > average) {
				high_rank++;
			}
		}
		printf("%.3f%%\n", (high_rank / score_num) * 100);
	}
	return 0;
}