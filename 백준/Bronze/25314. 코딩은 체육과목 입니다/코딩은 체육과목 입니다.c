#include <stdio.h>

int main() {
	int byte = 0 ;
	char arg1[] = "long";
	scanf("%d", &byte);
	for (int i = 0; i < byte / 4; i++) {
		printf("%s ", arg1);
	}
	printf("int");
	return 0;
}