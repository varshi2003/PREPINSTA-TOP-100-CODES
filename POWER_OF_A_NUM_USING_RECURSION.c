#include <stdio.h>
#include <math.h>
int power(int n1,int n2)
{
    if(n2==0)
    return 1;
    
    return n1*power(n1,n2-1);
}
int main()
{
    int a=2,b=3;
    printf("%d power %d is %d\n",a,b,power(a,b));


return 0;
}
