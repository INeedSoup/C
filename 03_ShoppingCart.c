#include <stdio.h>
#include <string.h>

int main()
{
    char items [50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item do you want to buy? ");
    fgets(items, sizeof(items), stdin);
    items[strlen(items) - 1] = '\0'; 

    printf("What is the price of the item? ");
    scanf("%f", &price);

    printf("How many items do you want to buy? ");
    scanf("%d", &quantity);

    total = price * quantity;
    printf("The total cost of %d %s is %c%.2f\n", quantity, items, currency, total);
    
    return 0;
}