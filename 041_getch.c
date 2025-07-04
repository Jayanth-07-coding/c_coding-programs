#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    ch=getch();//scanf("%c",&ch)
    printf("\nThe character is:%c\n",ch);
    putchar(ch);
    return 0;

}
