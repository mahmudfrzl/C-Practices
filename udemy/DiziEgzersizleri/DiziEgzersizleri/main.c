#include <stdio.h>
#include <stdlib.h>
#define NUM 10
int main()
{
    int arr[NUM];
    int max,min;
    printf("Enter the %d numbers\n",NUM);

    for(int i =0;i<NUM;i++){
        scanf("%d",&arr[i]);
    }

    max= arr[0];
    min = arr[0];
    printf("%d\n",min);
    for(int i =1;i<NUM;i++){
   /*
        if(arr[i] > max){

            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }*/
            max = arr[i] > max ? arr[i] : max;
        min = arr[i] < min ? arr[i] : min;

    }
    printf("max: %d , min: %d",max,min);


}
