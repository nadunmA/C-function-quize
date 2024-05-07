#include <stdio.h>

int main() {
    FILE *fp;
    char itemNumber[4][20];
    int quantity[4], i;
    float price[4];

    // Reading values from the keyboard
    printf("Enter Item Number, Quantity Sold, and Price of One Item (Rs):\n");
    for(i = 0; i < 4; ++i) {
        scanf("%s %d %f", itemNumber[i], &quantity[i], &price[i]);
    }

    // Writing to the file
    fp = fopen("item.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    for(i = 0; i < 4; ++i) {
        fprintf(fp, "%s %d %.2f\n", itemNumber[i], quantity[i], price[i]);
    }

    fclose(fp);
    printf("Data written to i.remctf file successfully.\n");

    return 0;
}

