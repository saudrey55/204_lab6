#include<stdio.h>
#include<string.h>

void sort_words(char *words[], int a)
{
    char *x;

    for (int i = 0; i<a; i++)
    {
        for (int j = i + 1; j<a; j++)
        {
            if ((char)(*words[i]) < (char)(*words[j]))
            {
                x = words[j];
                words[j] = words[i];
                words[i] = x;
            }
        }

    }
}

int main()
{
    int a,i,j,b;

    scanf("%d",&a);

    char z[a][100];

    for ( i = 0; i < a; i++)
    {   
        scanf("%s",&z[i]);
    }

    sort_words(z,a);
    
    for (int i = 0; i < a; i++)
    {
        printf("%s ", z[i]);
    }
}