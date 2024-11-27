#include <stdio.h>

int main(void) {
    
    int temp1,temp2,temp3,temp4;
    int num1 = 0;
    int num2 = 0;
   
    scanf("%d %d", &num1, &num2);

    temp1 = num1 * (num2 % 10);
    printf("%d\n", temp1);

    temp2 = num1 * (num2 % 100 - num2%10) / 10;
    temp3 = num1 * (num2 /100);
    printf("%d\n", temp2);
    printf("%d\n", temp3);

    temp4 = temp1 + (temp2 * 10) + (temp3 * 100);
    printf("%d", temp4);

    return 0;
}