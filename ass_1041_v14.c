//write a program find the smallest element in a 1D array in c language
#include<stdio.h>
int main()
{  
  int n,i,smallest;
  printf("enter the number of elements in the array:-");
  scanf("%d",&n);
  
  int arr[n];
  printf("enter %d elements:\n",n);
  for(i = 0; i < n; i ++);
  {
    scanf("%d",&arr[i]);
  }
  smallest = arr[0];
  for(i = 1; i < n; i++);
  {
    if(arr[i] < smallest)
    {
      smallest = arr[i];
    }
  }
   printf("the smallest element in the array is:%d\n",smallest);
return 0;
}
