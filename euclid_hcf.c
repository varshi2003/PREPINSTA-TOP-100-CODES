#include <stdio.h>

int main()
{    
    //EUCLID'S ALGORITHM FOR FINDING GCD OR HCF OF TWO NUMBERS-repeated subtraction 
    int num1,num2;
    printf("enter the numbers\n");
    scanf("%d %d",&num1,&num2);
    while(num1!=num2)
    {
        if(num1>num2)
        {
            num1-=num2;
        }
        else 
        {
            num2-=num1;
        }
    } 
    printf("%d\n",num1);
    

    return 0;
}
