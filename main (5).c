/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,i;
    printf("enter the num:");
    scanf("%d",&num);
    int count=0;
    for(i=1;i<=num;i++){
        if(num%i==0)
        count++;
    }
    if(count>2)
    printf("not a prime num\n");
    else 
    printf("prime num\n");
    

    return 0;
}
