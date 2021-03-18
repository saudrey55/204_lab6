#include<stdio.h>
#include<string.h>

int main()
{
    int a,i,j,b;

    scanf("%d",&a);

    char z[a][100],x[100];

    for ( i = 0; i < a; i++)
    {   
        scanf("%s",z[i]);
    }

   for(i=0;i<=a;i++){
      for(j=i+1;j<=a;j++){
         if(strcmp(z[i],z[j])>0)
         {
            strcpy(x,z[i]);
            strcpy(z[i],z[j]);
            strcpy(z[j],x);
         }
        }
   }
    for ( i = 0; i < a; i++)
    {
        printf("%s\n", z[i]);
    }
}