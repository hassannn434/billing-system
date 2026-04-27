#include <stdio.h>
#include <string.h>

int main() {
    char items[3][20] = {"Pen", "Book", "Bag"};
    int prices[3] = {10, 50, 500};
    char search[20];
    int i, found = 0, quantity, total;

    printf("=== Customer Billing System ===\n");

    printf("Available Items:\n");
    for(i = 0; i < 3; i++) {
        printf("%s - %d\n", items[i], prices[i]);
    }

    printf("\nEnter item name: ");
    scanf("%s", search);

    for(i = 0; i < 3; i++) {
        if(strcmp(items[i], search) == 0) {
            printf("Enter quantity: ");
            scanf("%d", &quantity);

            total = prices[i] * quantity;
            printf("Total Bill: %d\n", total);

            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Item not found\n");
    }

    return 0;
}