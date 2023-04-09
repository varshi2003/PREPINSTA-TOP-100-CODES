#include <stdio.h>
#include <math.h>

int main()
{
    int base,exponent;
    printf("enter the base and exponent:");
    scanf("%d %d",&base,&exponent);
    double result=1.00;
    if(exponent>0){
        while(exponent>0){
            result*=base;
            exponent--;
        }
    }
    else {
        while(exponent<0){
            result/=base ;
            exponent++;
        }
    }
    printf("the result is %lf\n",result);

    return 0;
}
