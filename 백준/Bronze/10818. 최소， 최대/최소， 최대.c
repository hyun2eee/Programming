#include<stdio.h>
#include<stdlib.h>

int main() {
	int max = 0;
	int mini = 0;
	int size, i;
	int *arr;

	scanf("%d", &size);
	arr = (int*)malloc(sizeof(int) * size);

		for (i = 0; i < size; i++) {
			scanf("%d", &arr[i]);
		}
		max = arr[0];
		for (i = 1; i < size; i++) {
			if (max < arr[i]) {
				max = arr[i];
			}
		}
		mini = arr[0];
		for (i = 1; i < size; i++) {
			if (mini > arr[i]) {
				mini = arr[i];
			}
		}
		printf("%d %d", mini, max);
		return 0;
}
