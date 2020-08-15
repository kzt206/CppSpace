#include<stdio.h>

int main(void){
    float wa,sa,seki,syo,amari;
    float num1 = 2,num2 = 5;

    scanf("%f%f",&num1,&num2);

    wa = num1 + num2;
    sa = num1 - num2;
    seki = num1 * num2;
    syo = num1/num2;
    amari = (int)num1 % (int)num2;

    printf("wa = %6.3f, sa = %6.3f, seki = %6.3f, syo = %6.3f, amari = %6.3f\n",wa,sa,seki,syo,amari);
    
    int h,w;
    scanf("%d%d",&h,&w);
    printf("%d\n",h*w);


    return 0;
}