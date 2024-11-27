#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int i, num, size;
	float* arr;
	int max = 0;
	float score;
	float average = 0;

	scanf("%d", &size);
	arr = (float*)malloc(sizeof(float) * size);

	for (i = 0; i < size; i++) {
		scanf("%f", &arr[i]);
	}

	for (i = 0; i < size; i++) {
		if (arr[i] > max)
			max = arr[i];
	}

	for (i = 0; i < size; i++) {
		score = (arr[i] / max) *100;
		arr[i] = score;
		score = 0;
	}
	
	for (i = 0; i < size; i++) {
		average = average + arr[i];
	}
	average = average / size;

	printf("%f", average);

	return 0;
}
