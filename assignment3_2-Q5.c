#include <stdio.h>
int main() {
    int a,b,c,sum;
    printf("Enter sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180){
        printf("The triangle is valid.");
    }
    else{
        printf("The triangle is not valid.");
    }
    return 0;
}


