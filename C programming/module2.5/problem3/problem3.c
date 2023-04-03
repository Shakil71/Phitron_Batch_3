#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("input the Number 1 : %d ", a);
    
    printf("\n");
    
    if(a%2==0){
        printf("This value is EVEN");
    }
    else{
        printf("This number is ODD");
    }
    return 0;
}