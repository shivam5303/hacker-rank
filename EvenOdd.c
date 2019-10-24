// C program to check whether a given number is even or odd.

#include<stdio.h>
int main()
{
   int x;
   printf("Enter a Number : ");
   scanf("%d",&x);
   if(x%2==0)
   {
      printf("even");
   }
   else{
      printf("odd");
   }
   return 0;
}
