#include<stdio.h>
int main()
{
    int SP,CP,profit,loss;
    printf("Enter cost price: ");
    scanf("%d",&CP);
    printf("Enter selling price: ");
    scanf("%d",&SP);
    if(SP>CP)
    {
        profit=SP-CP;
        printf("Profit = %d",profit);
    }
    else if(SP<CP)
    {
        loss=CP-SP;
        printf("Loss = %d",loss);
    }
    else{
            printf("There is no profit and loss.");

    }
    return 0;
}
