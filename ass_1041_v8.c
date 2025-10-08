//write a program compute factorial of a number 
#include<stdio.h>
int main()
{
  int n,i;
  unsigned long long fact = 1;
  
  printf("enter a number:-");
  scanf("%d",&n);
  
  for(i = 1;i<= n;i++)
  fact *= i;
  
  printf("factorial of %d = %llu\n",n,fact);
  return 0;
}
