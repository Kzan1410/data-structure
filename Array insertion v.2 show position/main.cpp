#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k[1000];
    int use_real = 10;

    int i;
    for(i=0; i<use_real ; i++)
    {
        k[i] = i+1;

    }

    for(i = 0 ; i<use_real ; i++)
    {
        printf("Array k Index[%d] = %d\n",i,k[i]);
    }
    printf("\n");

    int value_insert = 0;
    int index_insert = 0;
    printf("Insert value :: ");
    scanf("%d",&value_insert);

    printf("to index :: ");
    scanf("%d",&index_insert);
    printf("\n");



    for(i = use_real ; i >= index_insert ; i--  )
    {
        k[i+1] = k[i];

        if(i == index_insert)
        {
            k[i] = value_insert;
            use_real++;
        }
    }

    for(i = 0 ; i<use_real ; i++)
    {
        if(i == index_insert)
        {
            printf("Array k Index[%d] = %d Insert!!\n",i,k[i]);
        }
        else
        {
            printf("Array k Index[%d] = %d\n",i,k[i]);
        }

    }




    return 0;
}
