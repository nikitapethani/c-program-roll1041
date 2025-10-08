//write a program to print first N multiples of a number 
#include<stdio.h>
int main()
{
  int number,N;
  printf("enter the number:-");
  scanf("%d",&number);
  printf("enter how many multiples to print (N):");
  scanf("%d",&N);
  printf("first %d multiples of %d are:\n",N,number);
  
  for(int i = 1; i<= N; i++)
  {
    printf("%d",number * i);
  }
   printf("\n");
  return 0;
}
