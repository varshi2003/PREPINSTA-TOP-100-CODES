#include <stdio.h>

int main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    for(int i=1;i<=num/2;i++){
        if(num%i==0)
        printf("%d\t",i);
    }
    printf("%d\t",num);

    return 0;
}
