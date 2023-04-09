#include <stdio.h>

int main()
{
    int num;
    printf("enter the num for which factorial is to be found:");
    scanf("%d",&num);
    int fac=1;
    while(num>0){
        fac=fac*num;
        num--;
    }
    printf("the factorial of a num is :%d\n",fac);

    return 0;
}
