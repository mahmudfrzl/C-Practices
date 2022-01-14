#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  /*  int can[4] = {23, 45, 56, 56};
    int* ptr;
    ptr = &can;
    for(int i = 0; i < sizeof(can)/sizeof(can[0]); i++) {
        *(ptr++) = can[i] * 2;
        //printf("%d\n", can[i]);
    }

    for(int i = 0; i < sizeof(can)/sizeof(can[0]); i++) {
        *(ptr++) = can[i] * 2;
        //printf("%d\n", can[i]);
    }
/*
    for(int i=0;i<10;i++){
        can[i]= i*2;
        printf("%d\n",can[i]);
    }
    printf("\n");
    {
          for(int i=0;i<10;i++){
                printf("%d\n",can[i]);
          }
    }
    */

   /* int arr[4];
    int i = 0;
    int sum = 0;
    while(i<4)
    {
        printf("Enter the number: ");
        scanf("%d",&arr[i]);
        sum +=arr[i];
        i++;
    }
    printf("Total Sum: %d",sum);
    */
/*
    int mat[10][10];

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            (i == j) ? (mat[i][j] = 1) : (mat[i][j] = 0);

            printf("%4d",mat[i][j]);
        }
        printf("\n");

    }
    */
    /*
    int arr1[3][4] = { {1,4,5,2},{4,2,8,3},{3,1,5,9}};
    int arr2[3][4] = { {0,9,4,7},{3,6,8,0},{1,8,2,4}};
    int totalArr[3][4];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4;j++){
            totalArr[i][j] = arr1[i][j] + arr2[i][j];
            printf("%3d",totalArr[i][j]);
        }
        printf("\n");
    }
    */



    return 0;
}
