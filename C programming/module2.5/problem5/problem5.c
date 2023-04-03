#include<stdio.h>
int main()
{
    int taka;
    scanf("%d",&taka);
    printf("Enter the Money: %d",taka);

    printf("\n\n");

    if (taka>=10000)
    {
        printf("Buy Gucci Bag\n");
        if (taka>20000)
        {
            printf("Buy Gucci belt Also\n");
        }
        
    }
    
    else if(taka>=5000 && taka<10000){
        printf("Buy Levis Bag\n");
    }
    else
    {
        printf("Buy Something\n");
    }
    return 0;
}
