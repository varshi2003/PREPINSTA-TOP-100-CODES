/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int isPalindrome(int a)
{
    int temp=a;
    int rev=0,rem=0;
    while(temp)
    {
        rem = temp%10;
        rev= rev*10+rem;
        temp=temp/10;
    }
    if(rev==a)
    {
        return 1;
    }
}
void sortedArray(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int flag=0;
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        for(i=size-1;i>=0;i++)
        {
            if(isPalindrome(arr[i]))
            {
                printf("The longest palindrome in the array is %d\n",arr[i]);
                break;
            }
        }
    }
}
int main()
{
    
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of an array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sortedArray(arr,n);

    return 0;
}
