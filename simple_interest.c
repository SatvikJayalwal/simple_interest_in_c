#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("\nThis program calculates Simple Interest\n");
    printf("Enter principal : ");
    scanf("%f",&p);
    printf("Enter time : ");
    scanf("%f",&t);
    printf("Enter rate of interest : ");
    scanf("%f",&r);
    si=(p*r*t)/100;
    printf("The simple interest is : %f",si);
    return 0;


}