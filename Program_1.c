//Write a C program to get the integer array from the user and print it in the given order.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements in the given order with space separated.
//Example:
//Input:
//5 
//1 5 10 50 123
//Output: 
//1 5 10 50 123
#include<stdio.h> 

int main()
{
   int n,i,a[100];
   printf("Enter the value of n\n");
   scanf("%d",&n);
   printf("Enter the array elements\n");
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   printf("Array elements are\n");
   for(i=0;i<n;i++)
   {
     printf("%d\t",a[i]);
   }
   return 0; 
}