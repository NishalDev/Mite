#include<stdio.h>
int main(){
   float vol;
   int rad;
   printf("Enter radius of the sphere: ");
   scanf("%d",&rad);
   vol=((4.0f/3.0f) * (3.1415) * rad * rad * rad);
   printf("the volume of a sphere is %.2f",vol);
   return 0;
}