#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, count;
    for(i=0;i<=4;i++)
    {
        count=0;
        for(j=0;j<i;j++)
        printf(" ");

        for(j=0;j<=(4-i);j++)
            printf("%d", ++count);

            count--;
            while(count)
            printf("%d", count--);
         printf("\n");
    }
    return 0;
}
