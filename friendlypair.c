/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h> 

//friendly pair numbers:sum of the divisors of num1 / num1 == sum of the divisors of num2/num2

int getDivisorsSum(int num){
    int sum = 0;
    for(int i=1;i<num;i++){
        if(num%i==0)
        sum+=i;
    }
    return sum ;
}

int main()
{ 
    int num1,num2;
    printf("enter the two numbers:");
    scanf("%d %d",&num1,&num2);
    int sum1=getDivisorsSum(num1);
    int sum2=getDivisorsSum(num2);
    if(sum1/num1 == sum2/num2)
    {
        printf("they are friendly pairs");    
    } 
    else 
    printf("they are not friendly pair\n");
    
}
