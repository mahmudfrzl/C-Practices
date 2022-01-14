#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* for(int i=1;i<=10;i++){
        printf("%d ",i);
    }*/

   /* int startN,endN;
    printf("Enter start value: ");
    scanf("%d",&startN);
    printf("\nEnter end value: ");
    scanf("%d",&endN);

    for(int i=startN;i<=endN;i++){
        printf("\n%d ",i);
    }
    */
  /*  for(int i=10;i>0;i--){
        printf("%d ",i);
    }
    */
 /*   for(char ch ='a';ch<='z';ch++){
        printf("%c ",ch);
    }
    */
/*
    int num;
    printf("Input upper limit: ");
    scanf("%d",&num);
    int result =0;
    for(int i=1;i<=num;i++){
         result +=i;

    }
    printf("Sum of natural numbers 1-%d: %d",num,result);
*/
   /* int num;
    printf("Input num: ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
        {
            printf("%d * %d = %d\n",num,i,num*i);
        }
*/
/*
    int num;
    int firstDigit,lastDigit,sum=0;
    printf("Input num: ");
    scanf("%d",&num);

    lastDigit =num %10;

    while(num>10){
        num /=10;

    }
         firstDigit = num;
    sum =firstDigit + lastDigit;
    printf("%d",sum);
    */

    int num,reverseNum =0;
        printf("Input num: ");
    scanf("%d",&num);

    while(num !=0){

        reverseNum = reverseNum *10;
        reverseNum = reverseNum + num %10;
        num = num/10;
    }
    printf("%d",reverseNum);
    */
/*
    int a,b,c,i,terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    a = 0;
    b = 1;
    c = 0;

 printf("Fibonacci terms: \n");
    for(int i=1;i<=terms;i++)
    {
        printf("%d, ", c);

        a = b;
 // Copy n-1 to n-2
        b = c;
   // Copy current to n-1
        c = a + b; // New term

    }
    */



}
