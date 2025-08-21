//take input from the user and check whether sides of triangle is valid or not

#include <stdio.h>
int main()
{
    int a,b,c,add;
    printf("enter the sides of triangle ");
    scanf("%d%d%d",&a,&b,&c);
    add=a+b+c;
    if(add==180)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is invalid");
    }
}
