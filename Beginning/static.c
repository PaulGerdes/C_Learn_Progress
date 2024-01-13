#include <stdio.h>
   int sum (int num) {
       static int count;
       count = count + num;
       return count;
   }

   //with static you can save values of variables in the memorie
   //so when the function restarts the Values of the Variables are the same

   int main() {
       printf("%d ",sum(55));
       printf("%d ",sum(45));
       printf("%d ",sum(50));
       return 0;
   }