#include <stdio.h>
#include<math.h>

//to find the fibonacci series
int main()
{
    int num;
    printf("enter the numbers for which fibonacci series sequence is to be found:");
    scanf("%d",&num);
    int a=0,b=1;
    printf("%d %d",a,b);
    int nextterm;
    for(int i=2;i<num;i++){
        nextterm=a+b;
        a=b;
        b=nextterm;
        printf(" %d\t",nextterm);
        
    }

    return 0;
}
