#include <stdio.h>
 
int main()
{
    int a;
 
    printf("Enter the number A: ");
    scanf("%d", &a);
 
    if (a > 0)
        printf("%d is positive.", a);
    else if (a < 0)
        printf("%d is negative.", a);
    else if (a == 0)
        printf("%d is zero.", a);
 
    return 0;
}