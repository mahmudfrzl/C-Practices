#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   while(num != 0){
    int temp, rem, rev = 0;
   printf("Enter a number:");
   scanf("%d", &num);

   temp = num;

     while(temp!=0){
      rem = temp %10;
      rev = rev *10+ rem;
      temp = temp /10;
   }

    if(num == rev && num!=0)
      printf("\nCongrats , %d is a palindrome.\n", num);

   else
      printf("%d is not a palindrome.\n", num);

   rev = 0;
   }
   if ( num == 0 ){
     printf("\nBye");
     return;
   }
    return 0;
}
