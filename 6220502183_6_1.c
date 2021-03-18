#include<stdio.h>
#include<string.h>

int main()
{
    int a,i,j;

    scanf("%d",&a);

    char z[a][50];

    for ( i = 0; i < a; i++)
    {
        for (j = 0; j < 50; j++)
        {
            scanf("%s",&z[i][j]);
        }
    }
    


}