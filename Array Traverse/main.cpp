#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[1000];
    int use = 20;


    int i;
    for(i = 0 ; i<use ; i++)
    {
        array[i] = i;
    }


    for(i = 0 ; i<use ; i++ )
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
}
