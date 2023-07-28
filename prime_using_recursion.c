#include <stdio.h>
int checkPrime(int i,int n)
{
    if(n==i)
    return 0;
    else if(n%i==0)
    return 1;
    else 
    checkPrime(i+1,n);
}
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if(checkPrime(2,num)==0)
    printf("%d is a prime number\n",num);
    else 
    printf("%d is not a prime number\n",num);

    return 0;
}
