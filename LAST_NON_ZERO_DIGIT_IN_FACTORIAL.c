/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int factorial(int num)
{
    if(num<=1)
    return 1;
    
    return num*factorial(num-1);
}
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int fac=factorial(n);
    while(fac%10==0)
    {
        fac/=10;
    }
    printf("The last non-zero digit in factorial is %d\n",fac%10);
    return 0;
}
