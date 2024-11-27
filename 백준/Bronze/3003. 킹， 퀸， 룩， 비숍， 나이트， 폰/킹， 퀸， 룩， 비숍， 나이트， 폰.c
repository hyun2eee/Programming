#include <stdio.h>

int main(void) {
    
    int k = 0;
    int q=0; 
    int l=0; 
    int b=0; 
    int n=0; 
    int p=0;

    scanf("%d %d %d %d %d %d", &k, &q, &l, &b, &n, &p);
    k = 1 - k;
    q = 1 - q;
    l = 2 - l;
    b = 2 - b;
    n = 2 - n;
    p = 8 - p;

    printf("%d %d %d %d %d %d", k, q, l, b, n, p);

    return 0;
}