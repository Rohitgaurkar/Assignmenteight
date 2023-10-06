#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,count;
    for(i=0;i<=4;i++)
    {
        count=0;
        for(j=0;j<(4-i);j++)
            printf(" ");

        for(j=0;j<=i;j++)
        {
            ++count;
            printf("*");
        }
        count--;

        while(count)
        {
            count--;
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
