#include <stdio.h>

int main()
{
   int i, n,num,even_num=0,odd_num=0;
   scanf("%d",&n);
   for ( i = 0; i < n; i++)
   {
    scanf("%d",&num);
    if (num%2==0)
    {
        even_num=even_num+num;
    }
    else
    {
        odd_num+=num;
    }
    
    
   }
   printf("%d %d",even_num,odd_num);
   
   return 0;
}