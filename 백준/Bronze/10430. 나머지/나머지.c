#include <stdio.h>

int main(void) {
    
    int A = 0;
    int B = 0;
    int C = 0; 
    int temp = 0;

    scanf("%d %d %d", &A, &B, &C);

    temp = (A + B) % C;
    printf("%d\n", temp);
    temp = ((A % C) + (B % C)) % C;
    printf("%d\n", temp);
    temp = (A*B) % C;
    printf("%d\n", temp);
    temp = ((A % C) *(B % C)) % C; 
    printf("%d\n", temp);



    return 0;
}