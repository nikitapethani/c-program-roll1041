//write a program find the largest of four number
#include<stdio.h>
int main()
{
  int a,b,c,d,largest;
  printf("enter a four numbers");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  largest=a;
  
  if(b > largest)
  largest = b;
  
  if(c > largest)
  largest = c;
  
  if(d > largest)
  largest = d;
  
  printf("the largest number is:%d\n",largest);
  
return 0;
} 
