#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 20;
    int array[num];
    int i;
    for(i=0 ; i<num ; i++)
    {
        array[i] = i;
    }
    for(i=0 ; i<num ; i++)
    {

        printf("Array[%d] = %d\n",i,array[i]);
    }

    int index = 0;
    int ITEM = 0;
    printf("\nUpdate value from Array Index :: ");
    scanf("%d",&index);
    if(index>num)
    {
        while(index>num)
        {
            printf("Index :: %d ,can not use, Index <= element array [%d]\n",index,num);
            printf("\nUpdate value from Array Index :: ");
            scanf("%d",&index);
        }

    }
    printf("value :: ");
    scanf("%d",&ITEM);
    printf("\n");



    array[index] = ITEM;

    for(i=0 ; i<num ; i++)
    {
        if(i == index)
        {
            printf("Array[%d] = %d Update!!\n",i,array[i]);

        }
        else
        {
            printf("Array[%d] = %d\n",i,array[i]);
        }

    }

    return 0;
}
