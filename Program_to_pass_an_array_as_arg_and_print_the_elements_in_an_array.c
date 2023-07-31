/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int printElements(int *p,int n)
{
    for(int j=0;j<n;j++)
    {
        printf("%d",*p);
        ++p;
    }
}
int main()
{
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    int arr[1000];
    printf("Enter the elements of an array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements of an array are:\n");
    printElements(arr,n);

    return 0;
}
