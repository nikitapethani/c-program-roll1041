//write a program find the smallest of three number//
#include<stdio.h>
int main()
{
 int num1,num2,num3;
 printf("enter the three number:-");
 scanf("%d %d %d",&num1,&num2,&num3);
 int smallest;
 if(num1 <= num2 && num1 <= num3)
 {
  smallest = num1;
 }
 else if ( num2 <= num1 && num2 <= num3)
 {
  smallest = num2;
  }
  else
  {
  smallest = num3;
  }
  printf("the smallest number is:%d\n",smallest);
return 0;
}


