#include<stdio.h>
void main()
{
    double unit,bill;
    printf("Enter untis consumed: ");
    scanf("%lf",&unit);

    if(unit>0 && unit<=100)
    {
        bill=unit*0;
    }
    else if(unit>100 && unit<=200)
    {
        bill=(unit-100)*1.50+20;
    }
    else if(unit>200 && unit<=500)
    {
        bill=(unit-200)*3.00+100*2.00+30;
    }
     else if(unit>500)
    {
        bill=100*3.50+300*4.60+(unit-500)*6.60+50;
    }
    else
    {
        printf("Invalid unit!");
    }
    printf("\nTotal amount to be paid for two months after Govt's subsidy: RS %.2lf",bill);

}