#include <stdio.h>

int main() {
    int sectionA[] = {50, 51, 52, 53, 54, 55, 56, 57, 58, 59};
    int sectionB[] = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};

    int size = sizeof(sectionA) / sizeof(sectionA[0]);

    int combinedSections[size*2];

    int j = 0;
    for (int i = 0; i < size; i++) {
        combinedSections[j++] = sectionA[i];
    }
    for (int i = 0; i < size; i++) {
        combinedSections[j++] = sectionB[i];
    }

    printf("Combined sections: \n");
    for (int i = 0; i < size*2; i++) {
        printf("%d ", combinedSections[i]);
    }
    return 0;
}
