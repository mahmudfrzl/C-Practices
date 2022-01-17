#include <stdio.h>
#include <stdlib.h>



    int power(int num1,int pow){
        if(pow ==0) return 1;
        else if(pow > 0){
            return num1 * power(num1,pow -1);
                                                        //1) 5 * power(5,1) = ;
                                                        //1) 5 * power(5,0);
        }

    }

    void power1(int num,int nbum2,int num3,double num4){
        printf("%d",num);
    }





    void findNaturalNumbers(int num2,int num3){



                if(num2 > num3){
                    return ;
                }
                printf("%d",num2);
            findNaturalNumbers(num2 +1,num3);

    }

     int sumOfNaturalNumbers(int start, int end)
{
    if(start == end)
        return start;
    else
        return start + sumOfNaturalNumbers(start + 1, end);
}

    int sum(int start1,int finish){
        if(start1 == finish){
            return start1;
        }else{
            return start1 +sum(start1+1,finish); //1+2+3+4+5 = 15       // 1 + sum(2,5) =2 + sum(3,5);
                                                                        // 2 + sum(3,5) = 3 + sum(4,5);
                                                                        // 3 + sum(4,5) = 4 + sum(5,5);
                                                                        // 4 + sum(5,5) = 5;
        }
    }



    void findNatural(int start,int finish){
        if(start > finish) return;
        printf("%d",start);
         findNatural(start +1,finish);
    }





int main()
{
    int response;
  /*  response = power(5,2);
    printf("%d",response);

 //findNaturalNumbers(1,10);

   response = sumNaturalNumbers(1,10);
     printf("%d",response);
    */
   //  int start, end, sum;

    /* Input lower and upper limit from user */
    /*
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    sum = sumOfNaturalNumbers(start, end);

    printf("Sum of natural numbers from %d to %d = %d", start, end, sum);

    response = sum(1,100);

     printf("%d",response);
    return 0;
    */
    findNatural(1,10);


}
