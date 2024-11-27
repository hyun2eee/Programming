#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int num;
	int sum = 0;
	int arr[100] = { 0, };
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {

		scanf("%1d", &arr[i]);
	}

	for (int i = 0; i < num; i++) {
		sum += arr[i];
	}
	printf("%d", sum);
	
	return 0;
}