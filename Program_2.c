//Write a program in C to copy the elements of one array into another array.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements( first and second(copied array) array) in the given order with space separated with appropriate statement
//Example
//Input:
//3 
//15 10 12
//Output: 
//The elements stored in the first array are :
//15 10 12
//The elements copied into the second array are :
//15 10 12
#include<stdio.h> 

int main()
{
    int n,i,a1[100],a2[100];
   printf("Enter the value of n\n");
   scanf("%d",&n);
   printf("Enter the array elements\n");
   for(i=0;i<n;i++)
   {
     scanf("%d",&a1[i]);
   }
   for(i=0;i<n;i++)
   {
     a2[i]=a1[i];
   }
    printf("The elements stored in the first array are\n");
   for(i=0;i<n;i++)
   {
     printf("%d\t",a1[i]);
   }
    printf("The elements copied into the second array are\n");
   for(i=0;i<n;i++)
   {
     printf("%d\t",a2[i]);
   }return 0; 
}
