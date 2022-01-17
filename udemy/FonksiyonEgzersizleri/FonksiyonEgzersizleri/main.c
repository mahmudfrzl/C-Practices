#include <stdio.h>
#include <stdlib.h>

void getPrimeNumbers(int finishNum){

    int counter = 0;

    for(int i = 3;i<finishNum;i++){
        for(int j = 2;j<i;j++){
            if(i % j == 0) counter ++;
        }if(counter == 0){
            printf("%d\n",i);
        }
        counter = 0;

    }



}

    int findPow2(int num){
        int res = num*num;
        return res;
    }

    void findPowWithAddress2(int* res,int* num){
        *res = *num * *num;
    }

    void findPow(int* res,int num1,int num2){
        for(int i =1;i<=num2;i++){
            *res *=  num1;
        }
    }
int main()
{

    int num,num2;
    printf("Enter the number: ");
    scanf("%d%d",&num,&num2);

  //  getPrimeNumbers(num);
    int res = 1;
    //res = findPow2(num);
    //printf("%d",res);
    printf("\n-----------\n");
   // findPowWithAddress2(&res,&num);
   // printf("%d",res);
    printf("\n-----------\n");
    findPow(&res,num,num2);
    printf("%d",res);


    return 0;
}
