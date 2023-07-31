//C Program to find character is alphabet or not

#include <stdio.h>
int main()
{
    char ch='9';

 
    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        printf("The inserted character %c is an Alphabet", ch);
   
    else
        printf("The entered character %c is not an Alphabet", ch);

    return 0;
}
