#include <stdio.h>
float avg(int arr[],int size);
int main()
{
   int x;
   printf("Enter the length of the array : ");
   scanf("%d",&x);
   int arr[x];
   for(int i=0;i<x;i++)
   {
       printf("arr[%d] : ",i);
       scanf("%d",&arr[i]);
   }
   printf("The average = %f",avg(arr,x));
    return 0;
}
float avg(int arr[],int size)
{
    float sum=0.0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum/size;

}
