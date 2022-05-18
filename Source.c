#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable :4996)

void main() {
    int low, high, odds = 0;
    do {
        printf("Please enter a number:");
        rewind(stdin);
        scanf("%d", &low);
    } while (low <= 0);
    do {
        printf("Please enter the second number:");
        rewind(stdin);
        scanf("%d", &high);
    } while (high < 2 * low);
    printf("The odd numbers between %d and %d are: ", low, high);
    for (odds = low;odds <= high;odds++) {
        if (odds % 2 != 0)
        {
            printf(" %d", odds);
        }
    }
    printf(".\n");
    system("pause");
}

