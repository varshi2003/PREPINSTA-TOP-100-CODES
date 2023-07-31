/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the elements of an array:\n");
    scanf("%d",&n);
    printf("Enter the elements in an array\n");
    int arr[1000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        arr[i]=0;
        else if(arr[i]%2==1)
        arr[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}
