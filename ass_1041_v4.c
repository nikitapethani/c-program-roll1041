//write a program print the first N natural number
#include<stdio.h>
int main()
{
 int N,i;
 printf("enter the number:-");
 scanf("%d",&N);
 if(N <= 0)
 {
  printf("enter a number is greater than 0./n");
  return 1;
  }
  printf("the first %d natural numbers are:\n",N);
  for (i=1;i<=N;i++)
  {
   printf("%d",i);
  } 
 printf("\n");
 
 return 0;
 }
 
 
