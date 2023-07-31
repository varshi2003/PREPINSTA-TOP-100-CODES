/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the num:");
    scanf("%d",&num);
    int rem,num2,rev;
    if(num==0)
       num2=1;
    
    while(num>0)
    {
        rem = num % 10;
        if(rem==0)
        rem=1;
        num2 = num2*10+rem;
        num/=10;
    }
    num=0;
    int r;
    while(num2>0)
    {
        r = num2 % 10;
        num = num*10 + r;
        num2/=10;
    }
    printf("%d\n",num);

    return 0;
}
