#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
*****
*****
*****
*****
*****


    for(int i=1;i<=5;i++)
        {
            for(int j=1;j<=5;j++)
            {
                 printf("*");
            }
            printf("\n");
        }

*/
  //  for(int)
   /* int x=5,y=2,power =1;

    for(int i=1;i<=y;i++){
        power *=x;
    }
    printf("%d",power);
*/
    int i,j;
/*
        for(int i=1;i<=5;i++){

            for(int j=1;j<=5;j++){
                if(i==1 || i==5 || j==1 || j==5)
            {

                printf("*");
            }
            else
            {
                printf(" ");
            }
            }
              printf("\n");
        }
        */



   //    int i,j;

     /*   for( i=1;i<=5;i++){
            for( j =1;j<=5-i;j++){
                printf(" ");
            }
            for( j =1;j<=5;j++){
                printf("*");
            }
            printf("\n");
        }
*/


/*
        for(i=1;i<=5;i++){
            for(j=1;j<=i;j++){
                printf("*");
            }
            printf("\n");
        }
*/
     /*   for(i=1;i<=5;i++){
            for(j=1;j<=i;j++){
                    if(j==1 || j==i || i==rows){
                      printf("*");
                    }else{
                        printf(" ");
                    }

            }
            printf("\n");
        }

*/

     /*   for(i=1;i<=5;i++){
            for(j=1;j<=5-i;j++){
                printf(" ");
            }
            for(j=1;j<=i;j++){
                printf("*");
            }
            printf("\n");
        }
*/


/*  for(i=1;i<=5;i++){

            for(j=1;j<=5-i;j++){
                printf(" ");
            }
               for(j=1;j<=i;j++){


               if(i==5 || j==i || j==1){

                printf("*");

            }else{
                printf(" ");
            }
        }
            printf("\n");
        }*/
   /* for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
                if(i==5 || j==1 || j==i){
                           printf("*");
                }
                else{
                    printf(" ");
                }
        }
        printf("\n");
    }*/

    int num;
    printf("Enter the any nums: ");
    scanf("%d",&num);
    int lastDigit = num%10;

    while(num > 10){
        num /=10;

    }
    int firstDigit = num;
    int total = firstDigit + lastDigit;
    printf("%d",total);
}
