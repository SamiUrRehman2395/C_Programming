#include <stdio.h>

// Function to calculate GST
float calculateGST(float totalBill) {
    return totalBill * 0.16;
}

int main() {
    // Menu items and their prices
    char *menuItems[] = {"Zinger Burger", "Medium Pizza", "Grill Sandwich", "French Fries", "Soft Drink"};
    int menuPrices[] = {380, 1150, 250, 200, 120};
    int numItems = 5;

    // Order details
    int orderQuantity[numItems];
    int totalBill = 0;

    // Getting order from the user
    printf("Welcome to the restaurant!\n");
    printf("Menu:\n");
    for (int i = 0; i < numItems; i++) {
        printf("%d. %s - $%d\n", i+1, menuItems[i], menuPrices[i]);
    }

    int choice;
    do {
        printf("Enter the item number you want to order (or 0 to complete order): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= numItems) {
            int quantity;
            printf("Enter the quantity: ");
            scanf("%d", &quantity);
            orderQuantity[choice - 1] += quantity;
            totalBill += quantity * menuPrices[choice - 1];
        }
        else if (choice != 0) {
            printf("Invalid item number! Please try again.\n");
        }
    } while (choice != 0);

    // Printing order details
    printf("\nYour Order:\n");
    for (int i = 0; i < numItems; i++) {
        if (orderQuantity[i] > 0) {
            printf("%s: %d x $%d = $%d\n", menuItems[i], orderQuantity[i], menuPrices[i], orderQuantity[i] * menuPrices[i]);
        }
    }

    // Calculating GST
    float gst = calculateGST(totalBill);

    // Printing total bill
    printf("\nSubtotal: $%d\n", totalBill);
    printf("GST (16%%): $%.2f\n", gst);
    printf("Total Bill (incl. GST): $%.2f\n", totalBill + gst);

    return 0;
}

