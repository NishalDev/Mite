#include<stdio.h>
void main()
{
    double si,p,t,r;
    printf("Enter Principle amount, time period and rate of interest: ");
    scanf("%lf%lf%lf",&p,&t,&r);
    si=(p*t*r)/100;
    printf("Simple interest=%.2lf",si);
}