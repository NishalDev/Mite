#include<stdio.h>
void main()
{
    int sum=0,n=10,i,avg=0,count;
    int arr[10];
    // printf("Enter the number of elements: ");
    // scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        sum=sum+arr[i];
    }      
    avg=sum/n;
    printf("\nSum: %d\t",sum);
    printf("\nAverage: %d",avg);
}