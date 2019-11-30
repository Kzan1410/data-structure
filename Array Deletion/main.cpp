#include <stdio.h>
#include <stdlib.h>

int main()
{
    int element = 10;
    int LA[element];

    int i;
    for(i=0 ; i<element ; i++)
    {
        LA[i] = i;
    }

    for(i = 0 ; i< element ; i++)
    {
        printf("Array LA[%d] = %d\n",i,LA[i]);

    }
    printf("\n");


    int index;
    printf("Delete position array LA Index :: ");
    scanf("%d",&index);

    printf("Delete at the position Index[%d] of array LA\n",index);

    printf("\n");

    if(index<=element)
    {
        int J = index;

        while(J<element)
        {
            LA[J-1] = LA[J];
            J++;


        }

        element--;

    }
    else
    {
        printf("Can not deletion, Change value index and value index <= N, let be try again\n");
    }

    if(index < element)
    {
        for(i = 0 ; i< element ; i++)
        {
            printf("Array LA[%d] = %d\n",i,LA[i]);
        }
    }



    return 0;
}
