#include <stdio.h>

int main() {
    int sum = 0, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers is %d\n",n,sum);
    return 0;
}
