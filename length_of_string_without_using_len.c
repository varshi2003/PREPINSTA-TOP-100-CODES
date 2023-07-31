/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include<conio.h>
int main()
{
    char str[100];
    printf("Enter the string:\n");
    fgets(str,sizeof(str),stdin);
    int len=0;
    for(int i=0;str[i]!='\0';i++)
    {
        len++;
    }
    printf("%d is the length of the %s",len,str);

    return 0;
}
