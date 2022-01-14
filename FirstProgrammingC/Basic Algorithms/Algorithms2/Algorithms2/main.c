#include <stdio.h>
#include <stdlib.h>

int main()

{
    // f(x) = x^3 + 13x^2 + 47x +5
  /*  float x;
    printf("Enter the x\n");
    scanf("%f",&x);
    float result = x*x*x + 13*x*x * 47*x + 5;
    printf("Value of x: %.2f\n",x);
    printf("f( %.3f ) = %.3f",x,result);
        return 0;
        */

        //&& ||

   /* int n1,n2;
    printf("Enter the numbers:\n");
    scanf("%d%d",&n1,&n2);
    printf("Your 2 numbers: %d %d\n",n1,n2);
    if(n1 <0  || n2 <0 ){
            if(n1 ==0 || n2 ==0){
           printf(">> sign(%d * %d)= 0\n",n1,n2);
    }else{
            printf(">> sign(%d * %d)=-1\n",n1,n2);
    }

    }else if(n1 >0 && n2 >0){
        printf(">> sign(%d * %d)=+1\n",n1,n2);
    }else{
        if(n1 ==0 || n2 ==0){
           printf(">> sign(%d * %d)= 0\n",n1,n2);
    }
    }
    */

    // verilen n-e qeder 17 nin katlarini yazdiran program yaz
/*
    int limit,i,satir;

    printf("Enter the x\n");
    scanf("%d",&limit);

    i=0;
    satir = 0;
    while(i<=limit){
        if(i%17==0){
            printf("%5d",i);
            satir++;
            if(satir%10==0){

                printf("\n");
            }
        }
        i++;
    }
*/
      /*  int n;
        int result =0;
        printf("Rakami giriniz:\n");
        scanf("%d",&n);
        int i =0;
        while( i<=n){
                if(i==n){
                    printf("%d",n);
                }else{
                    printf("%d + ",i);
                }
             result +=i;
             i++;
        }
        printf(" = %d",result);
*/
    int n;
    printf("Please enter the number:\n");
    scanf("%d",&n);
    int i=0;
    int row =0;
    while(i<n){

        printf("%5d",i);
        i +=17;
          row ++;
        if(row%10==0){
            printf("\n");
        }


    }


}
