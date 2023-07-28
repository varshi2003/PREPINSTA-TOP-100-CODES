/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int getReverse(int n)
{
    static int rev,rem;
    if(n>0)
    {
         rem = n%10;
         rev = rev*10+rem;
         getReverse(n/10);
    }
    else
    return rev;
}
int main()
{
    int num;
    printf("Enter the num:");
    scanf("%d",&num);
    printf("The reverse of the num is %d\n",getReverse(num));

    return 0;
}
