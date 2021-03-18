#include<stdio.h>

int main()
{
    int c=0,d=0,n,i;

    scanf("%d",&n);

    int a[n],b[n];

    scanf("%d",&a);

    scanf("%d",&b);

    for ( i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            c++;
        }
        else if (a[i] != b[i])
        {
            d++;
        }
    }

    printf("%d %d",c,d);
    
}