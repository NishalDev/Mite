#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n=10,k=10,m;
    lable:
    while(n!=0)
    {  
        printf("");
        scanf("%d",&m);
        if(m>0 && m<=10)
        {
            k=n-m;
        }
        else
        {
            printf("Invalid input of candies left:%d",k);
            exit(0);
        }
    
        printf("\nNumber of candies sold:%d",m);
        printf("\nNumber of candies available:%d",k);
    }
    
    
        printf("\nRefilling the Candy JAR... ");
        n=10;
    goto lable;
}