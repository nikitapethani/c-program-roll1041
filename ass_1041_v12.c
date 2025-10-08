// write a program compute the sum of element in a 1D array
#include<stdio.h>
int main()
{
  int arr[50],n,i,sum;
  printf("enter the number of element in the array:-");
  scanf("%d",&n);
  for(i=0;i<n;i++)
{ 
  printf("elements %d:",i+1);
  scanf("%d",&arr[i]);
}
  for(i=0;i<n;i++)
{
  sum +=arr[i];
}
 printf("sum of the array elements=%d\n",sum);
 return 0;
}
