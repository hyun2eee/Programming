#include<stdio.h>

int main() {
	
	int i,num=0;
	int arr[10] = { 0, };
	int arr1[42] = { 0, };

	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		arr[i] = arr[i] % 42;
		}
	for (i = 0; i < 10; i++) {
		++arr1[arr[i]];
	}
	for (i = 0; i < 42; i++) {
		if (arr1[i]!=0) {
			++num;
		}
	}
	printf("%d ", num);
	return 0;
}
