#include <stdio.h>
int main() {

	int i, num, a, b;
	scanf("%d", &num);
        for (i = 0; i < num; i++) {
			scanf("%d%d", &a, &b);
			printf("%d\n", a+b);
	}
	return 0;
}