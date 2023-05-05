#include <stdio.h>
// 1. Has Return + Parameter
int sum(int a, int b)
{
    return a + b;
}

// 2. Has Return + No Parameter
int power()
{
    int num;
    int pow;
    scanf("%d %d", &num, &pow);
    int res = 1;
    for (int i = 1; i <= pow; i++)
    {
        res = res * num;
    }
    return res;
}

// 3. No Return + Parameter
void Ascii(char c)
{
    int d = c;
    printf("%d\n", d);
}

// 4. No Return + No Parameter
void mul_tab()
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int res = sum(a, b);
    printf("res : %d\n", res);
    printf("power : %d\n", power());
    char c;
    scanf(" %c", &c);
    Ascii(c);
    mul_tab();
}