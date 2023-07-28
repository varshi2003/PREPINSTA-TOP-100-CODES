/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int minimum(int arr[],int i,int len,int min)
{
    if(min>arr[i])
    {
        min=arr[i];
    }
    if(i>=len)
    return min;
    return minimum(arr,i+1,len,min);
}
int main()
{
    int size;
    printf("enter the size:\n");
    scanf("%d",&size);
    int arr[100];
    printf("enter the elements of an array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The minimum element in an array is %d\n",minimum(arr,0,size,arr[0]));

    return 0;
}
