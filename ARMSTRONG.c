#include<stdio.h>
#include<math.h>
 
int order(int x){
    int len=0;
    while(x>0){
        len++;
        x=x/10;
    }
    return len;
}

int armstrong(int num,int len){
    int temp,sum=0,digit;
    temp=num;
    while(temp>0){
        digit=temp%10;
        sum+=pow(digit,len);
        temp=temp/10;
    }
    return num==sum;
}

int main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    int len=order(num);
    if(armstrong(num,len))
    printf("the num is an armstrong:%d\n",num);
    else 
    printf("The num is not an armstrong %d\n",num);

    return 0;
}
