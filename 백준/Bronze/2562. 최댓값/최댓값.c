#include<stdio.h>

int main() {
	int max = 0;
	int i;
	int arr[9]={0,};
	int num = 0;
	for (i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	for (i = 0; i < 9; i++) {
		++num;
		if (max == arr[i]) {
			i = 8;
		}
	}
	printf("%d\n", max);
	printf("%d", num);
    
    return 0;
}
