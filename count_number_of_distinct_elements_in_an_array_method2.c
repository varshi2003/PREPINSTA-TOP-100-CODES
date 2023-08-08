/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int countDistinct(int a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int j=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            break;
        }
        if(j==n)
        count++;
    }
    return count;
}
int main()
{
    int arr[] = {5, 8, 5, 7, 8, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Distinct items: %d",countDistinct(arr, size));
    
    return 0;
}
