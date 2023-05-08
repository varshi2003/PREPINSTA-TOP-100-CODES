#include <stdio.h>

int gcd(int a,int b)
{
    return b == 0 ? a : gcd(b,a%b);
}

int main()
{
    //handling negative numbers in hcf 
    int num1,num2;
    printf("enter the numbers\n");
    scanf("%d %d",&num1,&num2);
    num1 = (num1>0)? num1 : -num1;
    num2 = (num2>0)? num2 : -num2;
    int res = gcd(num1,num2);
    printf("%d\n",res);

    return 0;
}
