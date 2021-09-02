//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int arr[10], n, i,Max,Min;
    printf("Enter the number of elements :" );
    scanf("%d", &n);
    printf("Input the array elements : ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        Max=Min=arr[0];
        for(i=1;i<n;++i)
{
if(arr[i]>Max)
Max=arr[i];

if(arr[i]<Min)
Min=arr[i];
}

printf("Max=%d\n",Max);
printf("Min=%d\n",Min);


    //Write your code here
  
    return 0;
}