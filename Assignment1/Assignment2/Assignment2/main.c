#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j;
  int N =10;
 /*
      *
     **
    ***
   ****
  *****
 ******
 */


    for( i =1;i<=9;i++){
        for(j =0;j<9-i;j++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    for(i = 1;i<=10;i++){
        for(j = 0;j<i;j++){
            printf(" ");
        }
       for(j=1; j<=(10*2 -(2*i-1)); j++)
        {
            printf("*");
        }
        printf("\n");

    }

    printf("\n\n");


    int spaces = N-1;
    int star = 1;

    for(i=1; i<N*2; i++)
    {

        for(j=1; j<=spaces; j++)
            printf("*");


        for(j=1; j<2; j++){

            printf("*");
        }
        for(j=1; j<=star; j++){

            printf(" ");
        }


        printf("\n");


        if(i < N)
        {
            star++;
            spaces--;
        }
        else
        {
            star--;
            spaces++;
        }
    }
    printf("\n\n");

    int stars = 1;
    int rows =10;
    spaces = rows - 1;


    for(i=1; i<rows*2; i++)
    {

        for(j=1; j<=spaces; j++)
            printf(" ");


        for(j=1; j<stars*2; j++)
            printf("*");


        printf("\n");

        if(i<rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }



    return 0;
}
