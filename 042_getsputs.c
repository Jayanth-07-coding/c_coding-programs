#include<stdio.h>
int main()
{
    char name[50];
    printf("Enter ur name:");
    gets(name);//scanf("%s",&my-name)
    printf("Hey..%s,Good to see you!..\n",name);
    puts(name);//printf("%s\n",name)
    return 0;
}
