/*taking input of sides of triangle  and checking whether the triangle is equilateral , isoscalas or scalane
*/
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a==b) {
        if (a==c ) {
            printf("This is an equilateral triangle.\n");
        } else {
        printf("this is not equilateral triangle");
        }
        }
        if (a == b || b == c || c == a) {
            printf("This triangle is isosceles.\n");
        } else {
            printf("The triangle is scalene.\n");
        }

    return 0;

}

