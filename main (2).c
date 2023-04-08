/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,i;
    printf("enter the range of the num on which sum is to be found:");
    scanf("%d%d",&a,&b);
    int sum=0;
    for(i=a;i<=b;i++){
        sum=sum+i;
    }
    printf("%d\n",sum);
    

    return 0;
}
