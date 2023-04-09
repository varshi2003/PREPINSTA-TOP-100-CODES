#include <stdio.h>
#include <math.h>
//fibonacci series using recursion

int fibonacci(int n)
{
    static int a=0,b=1,nextterm;
    if(n>0){
        nextterm=a+b;
        a=b;
        b=nextterm;
        printf("%d\t",nextterm);
        fibonacci(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("0 1 ");
    fibonacci(n-2);

    return 0;
}
