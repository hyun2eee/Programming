#include <stdio.h>
int main(){
    
    int dice1, dice2, dice3, price;
    scanf("%d %d %d", &dice1, &dice2, &dice3);
    
    if(dice1==dice2 && dice1==dice3){
        price = 10000 + dice1 *1000;
        printf("%d",price);
    }
    else if (dice1==dice2 || dice1==dice3 || dice2==dice3){
        if(dice1==dice2||dice1==dice3){
            price = 1000+dice1 * 100;
            printf("%d",price);
        }
            else{
            price = 1000+dice2 * 100;
            printf("%d",price);
        }
    }
        else {
            if(dice1>dice2 && dice1>dice3){
                price = dice1 * 100;
                printf("%d",price);
            }
            else if(dice2>dice1 && dice2>dice3){
                price = dice2 * 100;
                printf("%d",price);
            }
            else {
                price = dice3 * 100;
                printf("%d",price);
            }
        }
    return 0;
}