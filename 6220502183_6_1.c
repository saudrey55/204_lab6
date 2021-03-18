#include<stdio.h>
#include<string.h>

int main()
{
    int a,i,j,b;

    scanf("%d",&a);

    char z[a];

    for ( i = 0; i < a; i++)
    {
            scanf("%s",&z);
    }
    
    for ( i = 0; i < a; i++)
    {
        if (strcmpi(z[i],z[i+1]))
        { 
            printf("%s",z[i]);
        }
        
    }

}