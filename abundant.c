/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//ABUNDANT NUMBERS ARE THOSE WHOSE SUM OF THE DIVISORS IS GREATER THAN THE NUM ITSELF

int Abundant(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        sum+=i;
    }
    return sum;
}

int main()
{
    int number;
    printf("enter the num:");
    scanf("%d",&number);
    int res=Abundant(number);
    if(res>number){
        printf("the number is an abundant number\n");
    }
    else 
    printf("the number is not abundant number\n");

    return 0;
}
