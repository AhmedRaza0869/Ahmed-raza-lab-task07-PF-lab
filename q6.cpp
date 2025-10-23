#include <stdio.h>

int main() {
    int iCodes[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(iCodes) / sizeof(iCodes[0]);
int dfCode;
    printf("Enter defective item code: ");
    scanf("%d", &dfCode);

    for (int i = 0; i < size; i++) {
        if (iCodes[i] == dfCode) {
            iCodes[i] = -1;
        }
    }

    printf("Item codes after removing defective codes: ");
    for (int i = 0; i < size; i++) {
        if (iCodes[i] != -1) {
            printf("%d\n", iCodes[i]);
        }
    }

    return 0;
}
