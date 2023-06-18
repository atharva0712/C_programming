#include <stdio.h>

#define MAX_PRODUCTS 10

struct Product {
    char name[50];
    float price;
};

struct CartItem {
    struct Product product;
    int quantity;
};

int main() {
    struct Product products[MAX_PRODUCTS];
    struct CartItem cart[MAX_PRODUCTS];
    int numProducts = 0, numCartItems = 0;
    char choice;

    // Adding products
    printf("Product Entry\n");
    printf("--------------\n");

    do {
        printf("Enter product name: ");
        scanf("%s", products[numProducts].name);

        printf("Enter product price: ");
        scanf("%f", &products[numProducts].price);

        numProducts++;

        printf("Do you want to add another product? (y/n): ");
        scanf(" %c", &choice);

        printf("\n");
    } while (choice == 'y' || choice == 'Y');

    // Adding products to cart
    printf("Cart Entry\n");
    printf("--------------\n");

    do {
        int productIndex, quantity;

        printf("Enter product index (1-%d): ", numProducts);
        scanf("%d", &productIndex);

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        if (productIndex > 0 && productIndex <= numProducts && quantity > 0) {
            struct Product selectedProduct = products[productIndex - 1];

            cart[numCartItems].product = selectedProduct;
            cart[numCartItems].quantity = quantity;

            numCartItems++;
        } else {
            printf("Invalid product index or quantity. Please try again.\n");
        }

        printf("Do you want to add another product to the cart? (y/n): ");
        scanf(" %c", &choice);

        printf("\n");
    } while (choice == 'y' || choice == 'Y');

    // Displaying cart details
    printf("Cart Details\n");
    printf("--------------\n");

    float totalAmount = 0.0;

    printf("%-20s %-10s %-10s %-10s\n", "Product", "Price", "Quantity", "Amount");
    printf("-----------------------------------------------\n");

    for (int i = 0; i < numCartItems; i++) {
        struct CartItem item = cart[i];
        float amount = item.product.price * item.quantity;

        printf("%-20s $%-9.2f %-10d $%.2f\n", item.product.name, item.product.price, item.quantity, amount);

        totalAmount += amount;
    }

    printf("-----------------------------------------------\n");
    printf("Total Amount to be Paid: $%.2f\n", totalAmount);

    return 0;
}
