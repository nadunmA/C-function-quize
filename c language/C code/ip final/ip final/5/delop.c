#include <stdio.h>

int main() {
    FILE *fptr;
    char phone_number[20];
    float local_call_charges, international_call_charges, roaming_charges, total_charges;

    fptr = fopen("charges.dat", "w");

    if (fptr == NULL) {
        printf("Error! Could not open file\n");
        return 1;
    }

    printf("Enter phone number: ");
    scanf("%s", phone_number);

    while (strcmp(phone_number, "-1") != 0) {
        printf("Enter local call charges, international call charges, and roaming charges:\n");
        scanf("%f %f %f", &local_call_charges, &international_call_charges, &roaming_charges);

        total_charges = local_call_charges + international_call_charges + roaming_charges;

        fprintf(fptr, "%s %.2f %.2f %.2f %.2f\n", phone_number, local_call_charges, international_call_charges, roaming_charges, total_charges);

        printf("Enter phone number (-1 to quit): ");
        scanf("%s", phone_number);
    }

    fclose(fptr);
    printf("Phone bill details stored successfully in 'charges.dat' file.\n");

    return 0;
}

