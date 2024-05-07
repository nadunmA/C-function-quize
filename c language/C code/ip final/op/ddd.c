#include <stdio.h>

int main() {
    FILE *fp;
    char itemNumber[4][20];
    int quantity[4], i;
    float price[4];

    // Reading from file
    fp = fopen("item.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Reading values from the file
    for(i = 0; i < 4; ++i) {
        fscanf(fp, "%s %d %f", itemNumber[i], &quantity[i], &price[i]);
    }
    fclose(fp);

    // Calculating total amount paid for each item
    printf("Item No.\tTotal Amount\n");
    for(i = 0; i < 4; ++i) {
        float totalAmount = quantity[i] * price[i];
        if (quantity[i] > 3) {
            totalAmount *= 0.95; // Applying 5% discount
        }
        printf("%s\t%.2f\n", itemNumber[i], totalAmount);
    }

    return 0;
}

