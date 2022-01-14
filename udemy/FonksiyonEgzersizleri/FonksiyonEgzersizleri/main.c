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

    int findPow(int num){
        int res = num*num;
        return res;
    }

    void findPowWithAddress(int* res,int num){
        *res = num * num;
    }

int main()
{

    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int res ;
    //res = findPow(num);
    //printf("%d",res);
    printf("\n-----------\n");
    findPowWithAddress(&res,num);
    printf("%d",res);


  //  getPrimeNumbers(num);

    return 0;
}
