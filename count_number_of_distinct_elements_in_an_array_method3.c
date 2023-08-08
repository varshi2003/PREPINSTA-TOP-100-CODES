/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//time complexity = o(n) + 0(n^2) = o(n^2)
#include <stdio.h>
int countDistinct(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        while(i < n-1 && arr[i]==arr[i+1])
        i++; 
        
        count++;
    }
    return count;
}
void bubbleSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
             if(a[j]>a[j+1])
             {
                 int temp= a[j];
                 a[j] = a[j+1];
                 a[j+1] = temp;
             }
        
        }
    }
}
int main()
{
    
    int arr[] = {5, 8, 5, 7, 8, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    bubbleSort(arr, size);

    printf("Distict items: %d",countDistinct(arr, size));
    
    return 0;
}
