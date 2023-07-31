/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int FindLen(char *string)
{
    int count=0;
    
    while(*string!='\0')
    {
        count++;
        *string++;
    }
    return count;
}
int main()
{
     char str[100];
    printf("Enter the String:\n");
    fgets(str,sizeof(str),stdin);
    
    int len = FindLen(str);
    printf("%d is the length of %s",len,str);

    return 0;
}
