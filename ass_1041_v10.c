//write a program to print first N natural number in reverse 
#include<stdio.h>
int main()
{
  int N,i;
  printf("enter a number:-");
  scanf("%d",&N);

   for(i = N; i >= 1; i--)
   {
     printf(" %d",i);
   }
    printf("\n");
return 0;
}
