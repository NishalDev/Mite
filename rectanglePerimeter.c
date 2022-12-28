#include<stdio.h>
int main()   
{ 
    float height,width,perimeter;  
    printf("Enter height=");
    scanf("%f",&height);
    printf("Enter width=");
    scanf("%f",&width);
    perimeter = 2*(height+width);  
    printf("\n\n Perimeter of Rectangle is : %.2f",perimeter);  
    return (0);  
}  