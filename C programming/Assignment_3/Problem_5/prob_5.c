#include <stdio.h>
int is_palindrome(char *s)
{
    int flag = 0, i = 0, c = 0;
    while (*(s + i) != '\0')
    {
        c++;
        i++;
    }
    printf("Maximum Length: %d\n", i);
    for (int i = 0; i < c / 2; i++)
    {
        if ((*(s + i)) == (*(s + (c - 1) - i)))
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    char s[1001];
    scanf("%s", s);
    int res = is_palindrome(s);
    if (res == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
}