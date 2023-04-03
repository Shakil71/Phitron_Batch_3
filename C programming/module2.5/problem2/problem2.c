#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul;
    scanf("%d",&a);
    printf("input the Number 1 : %d ", a);
    scanf("%d",&b);
    printf("input the Number 2 : %d ", b);
    
    
    sum = a + b;
    sub = a - b;
    mul = a * b;
    float quotient = (float)a / b;
    printf("\n");
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%d X %d = %d\n",a,b,mul);
    printf("%d / %d = %.2f\n",a,b,quotient);

    return 0;
}