/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int checkprime(int num)
{
    if(num<2)
    {
    return 0;
    }
    else
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            return 0;
        }
    } 
    return 1;
}

int main()
{
    int a,b,i;
    printf("enter the two numbers in between which prime numbers are to be found:");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
    if(checkprime(i))
      printf("%d\n",i);
        
    }

    return 0;
}
