#include <stdio.h>
int main() {
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a==b && b==c)
        printf("The triangle is Equilateral.");
    else{
        if(a==b || b==c || a==c)
            printf("The triangle is Isosceles.");
        else
            printf("The triangle is Scalene.");
    }
    return 0;
}
