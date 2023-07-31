/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int BubbleSort(int arr[],int num)
{
    int temp,flag;
    for(int i=0;i<num-1;i++)
    {   
        flag=0;
        for(int j=0;j<num-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
    printf("The elements after bubble sort : \n");
    for(int i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n;
    printf("enter the size of an array:\n");
    scanf("%d",&n);
    int arr[1000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    BubbleSort(arr,n);

    return 0;
}
