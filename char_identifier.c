
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("\n Enter a character:");
    scanf("%c",&ch);
    if(isalpha(ch))
    {
    printf("\n %c is a alphabet",ch);
    }
   else if(isdigit(ch))
    {
        printf("\n %c is a digit",ch);
    }
    else if(ispunct(ch))
    {
        printf("\n %c is a punctuation",ch);
    }
    else if(isspace(ch))
    {
        printf("\n %c is a space",ch);
    }
    else
    {
        printf("\n %c is a special character",ch );
    }
    getch();
    return 0;

}