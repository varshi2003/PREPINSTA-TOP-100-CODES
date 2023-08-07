/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int arr[] = {30, 50, 30, 10, 20, 40, 10, 20}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int visited[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                if(arr[i]==arr[j])
                visited[j]=1;
            }
            count++;
        }
    }
    printf("The number of distinct elements in an array is %d\n",count);

    return 0;
}
