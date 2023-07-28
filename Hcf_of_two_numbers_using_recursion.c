#include <stdio.h>
int getHcf(int num1,int num2)
{
    if(num2==0)
    return num1;
    else 
    getHcf(num2,num1%num2);
}
int main()
{
    int a,b;
    printf("enter the numbers:\n");
    scanf("%d %d",&a,&b);
    printf("Hcf of %d and %d is %d\n",a,b,getHcf(a,b));

    return 0;
}
