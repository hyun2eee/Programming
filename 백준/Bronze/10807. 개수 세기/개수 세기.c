#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	int numofint;
	int find;
	int int_array[100] = { 0 };
	int count = 0;
	
	scanf("%d", &numofint);

	/*for (int i = 0; i < 100; i++) {
		int_array[i] = 0;
	}

	count = 0;*/

	for (int i = 0; i < numofint; i++) {
		scanf("%d",&int_array[i]);
		}

	scanf("%d", &find);

	for (int i = 0; i < numofint; i++) {
		if (find == int_array[i])
			++count;
	}

	printf("%d", count);
	return 0;
}