#include <stdio.h>

int main() {
	int i, num, multi;
	scanf("%d", &num);
	for (i = 1; i < 10; i++) {
		multi = i * num;
		printf("%d * %d = %d\n",num,i,multi);
	}
	return 0;
}