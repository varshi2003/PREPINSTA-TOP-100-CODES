/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    int sum=0;
    int rem=0;
    while(num>0){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    printf("%d\n",sum);

    return 0;
}
