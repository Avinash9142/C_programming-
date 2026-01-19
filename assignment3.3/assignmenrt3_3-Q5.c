#include <stdio.h>
int main() {
    char grade;
    printf("Enter grade\n'E', 'V', 'G', 'A', 'F'\n");
    scanf("%c", &grade);
    if (grade == 'E')
        printf("Excellent");
    else if (grade == 'V')
        printf("Very Good");
    else if (grade == 'G')
        printf("Good");
    else if (grade == 'A')
        printf("Average");
    else if (grade == 'F')
        printf("Fail");
    else
        printf("Invalid grade entered.");
    return 0;
}
