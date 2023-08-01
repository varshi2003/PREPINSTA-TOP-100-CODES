#include<stdio.h> 
void printArray(int *p,int n)
{
    int j=0;
    while(j<n)
    {
        printf("%d ",*p);
        ++p;
        j++;
    }
}
void main()
{
    int size;
    printf("enter the size of an array:\n");
    scanf("%d",&size);
    int arr[10000];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printArray(arr,size);
}
