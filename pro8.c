#include<stdio.h>

int main() {
   int n, r=0;
   int diff =0;
   int even=0;
   int odd=0;
   scanf("%d",&n);
  
   while(n != 0){
      r = n%10;
      if(r % 2 == 0) {
         even+=r;
      } else {
         odd+=r;
      }
      n/=10;
   }
   diff=odd-even;
   printf("%d",diff);
   return 0;
}

