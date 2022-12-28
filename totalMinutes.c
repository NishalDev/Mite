#include<stdio.h>
void main()
{
    int hr,min,tot;
    printf("Enter hour and minutes:");
    scanf("%d%d",&hr,&min);
    tot=hr*60+min;
    printf("total minute=%d",tot);
}