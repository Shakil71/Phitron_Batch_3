#include <stdio.h>

int main()
{
   int a , b,subs;
   scanf("%d",&a);
   scanf("%d",&b);

   subs = a - b;
   if (subs<=0)
   {
      printf("0");
   }
   else{
      printf("%d",subs);
   }
   
   return 0;
}