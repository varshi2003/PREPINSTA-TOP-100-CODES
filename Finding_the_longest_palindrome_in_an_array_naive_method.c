//finding the longest palindrome in an array using naive approach 
#include <stdio.h>
int isPalindrome(int a)
{
    int temp = a;
    int rem=0,rev=0;
    while(temp)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(rev==a)
    {
        return 1;
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
    int res = arr[0];
    for(int i=0;i<n;i++)
    {
        if(isPalindrome(arr[i]) && arr[i]>res)
        {
            res=arr[i];
        }
    }
    printf("%d is the longest palindrome in an array\n",res);
    return 0;
}
