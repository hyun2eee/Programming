#include <stdio.h>

int main() {
	char message[1000];
	int num = 0 ;
	scanf("%s",message);
	scanf("%d", &num);
	printf("%c", message[num-1]);

}