/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void countDistinct(int a[],int size)
{
    //sort the array 
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                
            }
        }
    }
    
    //count the occurences of an element 
    for(int i=0;i<size;i++)
    {
        int count=1;
        while(i<size-1 && a[i]==a[i+1])
        {
            count++;
            i++;
        }
        printf("%d ocuured %d times\n",a[i],count);
    }
}
int main()
{
    int n;
    printf("enter the size of an array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of an array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    countDistinct(arr,n);
    

    return 0;
}
