#include <stdio.h>
#include <stdlib.h>

int main()
{
       int marks;
       int counter =1;


    while(counter !=0){
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks >= 90 && marks <=100){

        printf("Congrats ! you scored grade A\n");
        return; // Foto-da Score A-dan sonrasi olmadigina gore return verdim))
    } else if (marks >= 70 && marks < 90){

        printf("You scored grade: B\n" );
    } else if (marks >= 40 && marks < 70){

        printf("You scored grade: C\n");
    } else {

        printf("Sorry you are fail ...\n");
    }
    }


    return 0;
}
