#include <stdio.h>
int main() {
    int appr = 1;
    int frSold[2] = {0};
    int spIds[] = { 1,2,3,4,6,7,8,9,1,2,3,3,3,4,5,6,5,7,6,8,5,9,10 };
    int size = sizeof(spIds) / sizeof(spIds[0]);

    for (int i = 0; i < size; i++) {
        if (spIds[i] == -1) {
            continue;
        }
        for (int j = i+1; j < size; j++) {
            if (spIds[i] == spIds[j]) {
                spIds[j] = -1;
                appr++;
            }
        }
        if (appr > frSold[0]) {
            frSold[0] = appr;
            frSold[1] = spIds[i];
        }
        appr = 1;
    }
    printf("Product with id %d was the most sold being sold %d times", frSold[1], frSold[0]);
    return 0;
}
