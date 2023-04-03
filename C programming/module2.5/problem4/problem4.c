#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("Enter the value : %d",a);

    printf("\n\n");

    if (a>0)
    {
        printf("%d is the Positive number",a);

    }
    if(a<0){
        printf("%d is the Negative number",a);

    }
    else{
        printf("Zero");
    }
    return 0;
}