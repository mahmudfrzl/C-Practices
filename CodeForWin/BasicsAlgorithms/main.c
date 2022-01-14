#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  /*  char c;
    short s;
    printf("Enter a character: ");
    scanf("%c",&c);
    printf("Enter a signed short value: ");
    scanf("%hi",&s);
    printf("You entered character: '%c'",c);
    printf("\nYou  entered signed short: %hi",s);
    return 0;

*/
/*
    int length;
    int width;
    printf("Enter length: ");
    scanf("%d",&length);

    printf("Enter width: ");
    scanf("%d",&width);

    int perimeter = (length + width)*2;
    printf("Perimeter of rectangle = %d units",perimeter);
*/

   /* int base,exponent;

    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter exponent: ");
    scanf("%d",&exponent);
    int i=1;
    int response =0;
    while(i<=exponent){
        response = base * base;
        i++;
    }
    printf("%d ^ %d = %d",base,exponent,response);
    printf("\n*************************** \n");

    int power = pow(base,exponent);

    printf("%d ^ %d = %d", base, exponent, power);
    */

   /* double celsius,faranheit;
    printf("Enter temperature in Celsius = ");
    scanf("%lf",&celsius);
    faranheit = (celsius*9/5) +32;
    printf("Temperature in Faranheit = %2.lf F",faranheit);

*/
/*
    int number,root;
    printf("Enter any number: ");
    scanf("%d",&number);
    int i=number;
    while(number>0){
            i--;
        if(number == i*i){
            printf("Square root of %d = %d",number,i);
            break;
        }
    }
    */
/*
    int one,two,three,four,five;
    int total=0,average;
    float percentage;
    printf("Enter marks of five subjects: ");
    scanf("%2d%2d%2d%2d%2d",&one,&two,&three,&four,&five);
    total = one + two + three + four +five;
    average = total / 5;
    percentage = (float) (total / 500.0) * 100;
    printf("\nTotal = %d",total);

    printf("\nAverage = %d",average);

    printf("\nPercentage = %f",percentage);


*/
     /*   int n;

        printf("Enter the number: ");


        int i=0;
        while(i<=10){
                i++;
            scanf("\n%d",&n);

        if(n%5==0 || n%11==0){
            printf("--%d",n);
        }

        }
        */
        /*  even(cut) and odd(tek)*/

     /*   int number;
        printf("Input number: ");
        scanf("%d",&number);
        if(number%2==0){
            printf("%d is even number",number);
        }else{
            printf("%d is odd number",number);
        }
        */
/*      char ch;
        printf("Enter the char: ");
        scanf("%c",&ch);
        if((ch >= 'a' && ch <='z') || (ch >= 'A' && ch <='Z') ){
            printf("%c is an alphabet",ch);

        }else{
        printf("%c isn't an alphabet",ch);
        }

        */

/*
        int day;
        printf("Enter week number(1-7): ");
        scanf("%d",&day);

        switch(day)
        {
         case 1:
                printf("Monday");
                break;
         case 2:
                printf("Tuesday");
                break;
         case 3:
                printf("Wednesday");
                break;
         case 4:
                printf("Saturday");
                break;
         case 5:
                printf("Friday");
                break;
         case 6:
                printf("Thursay");
                break;
         case 7:
                printf("Sunday");
                break;
         default:
            printf("ERROR!");
            break;

        }*/

     /*   int monthNumber;
        printf("Input month number: ");
        scanf("%d",&monthNumber);

        switch(monthNumber)
        {
        case 1:
            printf("Total number of month = 31");
            break;
        case 2:
            printf("Total number of month = 28||29");
            break;
        case 3:
            printf("Total number of month = 31");
            break;
        case 4:
            printf("Total number of month = 30");
            break;
        case 5:
            printf("Total number of month = 31");
            break;
        case 6:
            printf("Total number of month = 30");
            break;
        case 7:
            printf("Total number of month = 31");
            break;
        case 8:
            printf("Total number of month = 30");
            break;
        case 9:
            printf("Total number of month = 31");
            break;
        case 10:
            printf("Total number of month = 30");
            break;

        case 11:
            printf("Total number of month = 31");
            break;
        case 12:
            printf("Total number of month = 30");
            break;
        default:
            printf("Doesn't that is month");
        }
*/
 /*int monthNumber;
        printf("Input month number: ");
        scanf("%d",&monthNumber);

        switch(monthNumber)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:
               printf("Total number of month = 31");
               break;
        case 4:
        case 6:
        case 8:
        case 10:
        case 12:
               printf("Total number of month = 30");
               break;

        case 2:
            printf("Total number of month = 28||29");
            break;
        default:
            printf("Doesn't that is month");

        }
        */
/*
        int number;
        printf("Input number: ");
        scanf("%d",&number);
        switch(number%2)
        {
        case 0:
            printf("Even number");
            break;
        default:
            printf("Odd number");
        }

*/
    /*    int number;
        printf("Input number: ");
        scanf("%d",&number);

        switch(number>0)
        {
        case 1:
            printf("%d is positive",number);
            break;
        case 0:
            switch(number<0)
            {
                case 1:
                    printf("%d is negative.", number);
                    break;
                case 0:
                    printf("%d is zero.", number);
                    break;

            }
            break;
        }
        */

        float a,b,c;
        float deskriminant;
        float root1,root2;
        printf("Input: ");
        scanf("%f%f%f",&a,&b,&c);

        deskriminant = (b*b) - (4*a*c);

        switch(deskriminant > 0)
        {
            case 1:
                root1 = (-b - sqrt(deskriminant)) / 2*a;
                root2 = (-b + sqrt(deskriminant)) / 2*a;
                printf("Deskriminant have to root: root1 = %f,root2=%f",root1,root2);
            case 0:
                switch
                {


                }
            break;
        }




}
