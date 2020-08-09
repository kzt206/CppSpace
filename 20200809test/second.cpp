#include<stdio.h>

int main(void){
    int wa,sa,seki,syo,amari;
    int num1 = 2,num2 = 5;

    scanf("%d%d",&num1,&num2);

    wa = num1 + num2;
    sa = num1 - num2;
    seki = num1 * num2;
    syo = num1/num2;
    amari = num1%num2;

    printf("wa = %d, sa = %d, seki = %d, syo = %d, amari = %d\n",wa,sa,seki,syo,amari);
    
    return 0;
}