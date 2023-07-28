/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("enter the num:");
    scanf("%d",&n);
    int sum=0,count=1,prod=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            prod*=count;
            count++;
        }
        sum+=prod;
        prod=1;
    }
    printf("The F(%d)th term is %d\n",n,sum);

    return 0;
}
