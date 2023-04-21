#include <stdio.h>

int main()
{
    char str[1001];
    int i, capital_count = 0, small_count = 0,special;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            capital_count++;
        }

        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            small_count++;
        }
        else{

           special++;
        }
    }

    printf("%d %d", capital_count, small_count);
    return 0;
}
