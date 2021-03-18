#include<stdio.h>

int main()
{
    int c=0,d=0,n,i;

    scanf("%d",&n);

    char a[n],b[n];

    scanf("%s",a);
    scanf("%s",b);

    for ( i = 0; i < n; i++)
    {
        if (b[i]==a[i])
        {
            c++;
        }
        else 
        {
            d++;
        }
        
    }
printf("%d %d",c,d);
    
}
