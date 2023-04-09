#include <stdio.h>

int main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    int fac=1;
    for(int i=1;i<=num;i++){
        fac=fac*i;
    }
    printf("the factorial of a %d is %d",num,fac);

    return 0;
}
