#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
   /* int arr[SIZE];
    int i,N;
    printf("Enter size of array: ");
    scanf("%d",&N);

    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int min = arr[0];

    for(int i=0;i<N;i++){
            max = arr[i] > max ? arr[i] : max;
            min = arr[i] < min ? arr[i] : min;
    }
    printf("max: %d,min: %d",max,min);
*/
int arr[SIZE];
    int i,N ;
    int *ptr = arr;
    printf("Enter size of array: ");
    scanf("%d",&N);

    for(int i=0;i<N;i++){
        scanf("%d",ptr);
        ptr++;
    }
    ptr = arr;

    for(int i =0;i<N;i++){
        printf("%d\n",*(ptr));
        ptr++;
    }

    return 0;
}
