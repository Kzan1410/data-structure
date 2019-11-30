#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r = rand()%20;

    int N = 100;

    int LA[N];


    int i;
    for(i = 0 ; i<N ; i++)
    {
        LA[i] = r;
        r = rand()%N;
    }

    for(i = 0 ; i<N ; i++)
    {
        printf("Array LA Index[%d] = %d\n",i,LA[i]);
    }


    int yes;
    int no;
    int exi;
    do
    {
        printf("\n");
        int input =0;
        printf("search value :: ");
        scanf("%d",&input);

        printf("\n");r = rand()%20;

        int J = 0;
        while(J<N)
        {
            if(LA[J] == input )
            {
                printf("value %d equal Array LA[%d]\n",input,J);
                break;
            }
            else
            {
                J++;
            }

            if(J==N)
            {
                printf("not match, try again\n");

                printf("search value :: ");
                scanf("%d",&input);

                printf("\n");

                J=0;

            }

        }



        printf("\nContinue\n");
        printf("Yes : 1\n");
        printf("No  : 2\n");
        printf("1 or 2 :: ");
        scanf("%d",&exi);

        if(exi == 1)
        {

        }
        else if(exi == 2)
        {
            break;
        }
    }
    while(1==1);



    return 0;
}
