//made in simplest way
#include <stdio.h>
int main ()
{
    int a,b,c;
    printf ("enter the sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b)
    {
        if(a==c)
        {
            printf("the triangle is equilateral");
        }
        else
        {
            printf("the triangle is isosceles");
        }
    }
    else
    {
        printf("the triangle is scalene");
    }
}
