#include <stdio.h>
#include <stdlib.h>

    void squareStarPattern(){
    for(int i =1;i<=5;i++){
        for(int j = 1;j<=5;j++){
            if(i ==1 || i== 5 || j ==1 || j == 5){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
  printf("\n");
    }
    void hollowSquareStarPattern(){
    for(int i =1;i<=5;i++){
        for(int j = 1;j<=5;j++){
            if(i ==1 || i== 5 || j ==1 || j == 5 || i==j || j ==(5-i+1)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
  printf("\n");
    }
    void rhombusStarPattern(){
        for(int i = 1;i<=8;i++){

            for(int j =1;j<=8-i;j++){
                printf(" ");
            }
            for(int j =1;j<=8;j++){
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
    void hollowRhombusStarPattern(){
        for(int i =1;i<=8;i++){
            for(int j = 1;j<=8-i;j++){
                printf(" ");
            }
            for(int j = 1;j<=8;j++){
                if(i==1 || i==8|| j ==1 || j==8){
                printf("*");
                }else{
                    printf(" ");
                }
            }
        printf("\n");
        }
     printf("\n");
    }

    int reverse(int num){
        int rev = 0;
        int tmp;
        while(num !=0){
            tmp = num%10;
            rev = rev*10 + tmp;
            num /=10;
        }
        return rev;

    }

    void mirroredRhombusStarPattern(){
        for(int i =1;i<=8;i++){
            for(int j =1;j<i;j++){
               printf(" ");
            }
            for(int j =1;j<=8;j++){
                printf("*");
            }
             printf("\n");
        }

    }

    void  rightTriangleStarPattern(){
        for(int i=1;i<=6;i++){
            for(int j=0;j<i;j++){
                printf("*");
            }
            printf("\n");
        }
            printf("\n");
    }

        void  hollowRightTriangleStarPattern(){
        for(int i=1;i<=6;i++){
            for(int j=0;j<i;j++){
                    if(j==0 || j== i-1 || i==6){
                printf("*");

                    }else{
                        printf(" ");
                    }
            }
            printf("\n");
        }
                printf("\n");
    }


    void leftTriangleStarPattern(){
        for(int i =1;i<=6;i++){
            for(int j=i;j<6;j++){
                printf(" ");
            }

            for(int j=1;j<=i;j++){

                printf("*");
            }
            printf("\n");
        }
    }

    void pyramidStarPattern(){
        for(int i=1;i<=6;i++){
            for(int j=i;j<6;j++){
                printf(" ");
            }
            for(int j=1;j<=(i*2-1);j++){
                printf("*");
            }
            printf("\n");
        }
    }

    void reverseTriangle(){
        for(int i=1;i<=8;i++){

            for(int j=1;j<i;j++){
                printf(" ");
            }
            for(int j=i;j<=8;j++){
                printf("*");
            }
            printf("\n");
        }
    }

int main()
{
    squareStarPattern();
    hollowSquareStarPattern();
    rhombusStarPattern();
    hollowRhombusStarPattern();
    printf("%d\n",reverse(234));

    mirroredRhombusStarPattern();
    rightTriangleStarPattern();

    hollowRightTriangleStarPattern();
    leftTriangleStarPattern();
    pyramidStarPattern();

    reverseTriangle();
}
