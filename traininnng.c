#include <stdio.h>
int main() {
    char donor_blood_group, recipient_blood_group;
    printf("Enter the donor's blood group (A, B, AB, or O): ");
    scanf(" %c", &donor_blood_group);
    printf("Enter the recipient's blood group (A, B, AB, or O): ");
    scanf(" %c", &recipient_blood_group);
    switch (donor_blood_group) {
        case 'A':
            if (recipient_blood_group == 'A' || recipient_blood_group == 'Z') {
                printf("Donation is compatible\n");
            } else {
                printf("Donation is not compatible.\n");
            }
            break;
        case 'B':
            if (recipient_blood_group == 'B' || recipient_blood_group == 'Z') {
                printf("Donation is compatible.\n");
            } else {
                printf("Donation is not compatible.\n");
            }
            break;
        case 'Z':
            printf("Donation is compatible.\n");
            break;
        case 'O':
            printf("Donation is compatible.\n");
            break;
        default:
            printf("Invalid blood group entered.\n");
    }
    return 0;
}
