#include <stdio.h>

int main() {
    FILE *cfPtr;
    cfPtr = fopen("item.txt", "r");

    if (cfPtr == NULL) {
        printf("Error opening file!\n");
        return -1;
    }

    int itemNumber, quantitySold;
    float priceOfOne, totalAmount;

    printf("Item No.\tTotal Amount\n");

    // Read each line in the file
    while (fscanf(cfPtr, "%d %d %f", &itemNumber, &quantitySold, &priceOfOne) == 3) {
        if (quantitySold > 3) {
            totalAmount = priceOfOne * quantitySold * 0.95; // Apply 5% discount
        } else {
            totalAmount = priceOfOne * quantitySold;
        }
        printf("%d\t\t%.2f\n", itemNumber, totalAmount);
    }

    fclose(cfPtr);
    return 0;
}




