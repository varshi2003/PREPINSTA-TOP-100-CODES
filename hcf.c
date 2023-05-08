
//HCF-THE HIGHEST NUMBER THAT DIVIDES BOTH THE NUMBERS

#include <stdio.h>

int main()
{
    int num1,num2,i;
    int hcf=1;
    printf("enter the numbers:\n");
    scanf("%d %d",&num1,&num2);
    for(i=1;i<=num1||i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }
    printf("the hcf of two numbers is :%d\n",hcf);

    return 0;
}
