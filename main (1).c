#include<stdio.h>
main()
{
    char ch;
    printf("\n enter a character :");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    printf("\n Upper Case");
    if(ch>=97 && ch<=122)
    printf("\n Lower Case");
    if(ch>=48 && ch<=57)
    printf("\n It's a Digit");
}