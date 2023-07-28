/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int large(int arr[],int i,int len,int max)
{
    
    if(arr[i]>max)
    {
        max=arr[i];
    }
    if(i>=len)
    return max;
    
    return large(arr,i+1,len,max);
}
int main()
{
    int size;
    printf("Enter the size of an array:\n");
    scanf("%d",&size);
    int arr[100];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d is the maximum element in an array\n",large(arr,0,size,arr[0]));
    return 0;
}
