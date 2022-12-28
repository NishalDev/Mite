#include <stdio.h>

int main()
{
    char s[100];  
    int i;
    printf("Enter  the string : ");
    scanf("%s",s);
    for(i=0;s[i];i++)  
    {
        if(s[i]>=65 && s[i]<=90)
         s[i]+=32;
        else if(s[i]>=97 && s[i]<=122)
         s[i]-=32;
 	} 
    printf("string in togglecase ='%s'\n",s);
    return 0;
}