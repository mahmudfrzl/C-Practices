#include <stdio.h>
#include <stdlib.h>

    void findMaxAndMin(int num1,int num2){
        int max = num1>num2?num1:num2;
        int min = num1>num2?num2:num1;

        printf("max: %d",max);
        printf("\nmin: %d",min);
    }

    int isPrimeNum(int num){
        for(int i=2;i<=num/2;i++){
            if(num % i==0){
                return 0;
            }
        }
        return 1;
    }

    void betweenPrimeNumber(int num3,int num4){
        while(num3<=num4){
            if(isPrimeNum(num3)){
                printf("%d\n",num3);
            }
            num3++;
        }
    }

int main()
{
   /* int num1, num2;
    printf("Enter the numbers: ");
    scanf("%d%d",&num1,&num2);

    findMaxAndMin(num1,num2);
    return 0;

    int num = 12;
    if( isPrimeNum(num)){
        printf("Prime  number: %d",num);
    }else{
        printf("Isn't prime number: %d",num);
    }


        betweenPrimeNumber(10,50);
        */
}
