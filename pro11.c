#include<stdio.h>
void main()
{
    int n,k=1,spc;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        for(spc=i;spc<n;spc++)
        {
            printf(" ");
        }     
        for(int j=1;j<=i;j++)
        {
            printf("%d",k++);  
            printf(" ");
        }
 
        printf("\n");
    }
   
   
}