#include<stdio.h>

int main()
{
    int c=0,d=0,n,i;

    scanf("%d",&n);

    int a[n],b[n];
	for(i=0;i<n;i++)
    {
		scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
    {
		scanf("%d",&a[i]);
	}

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
