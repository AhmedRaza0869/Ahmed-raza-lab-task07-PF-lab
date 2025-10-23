#include <stdio.h>

int main() {
    int budget = 0;
    int prices_items[] = {1000, 2000, 1500, 4000, 5500, 6300, 2800, 2700, 1200, 100};
    int size = sizeof(prices_items) / sizeof(prices_items[0]);

    printf("Enter Budget:\n");
    scanf("%d", &budget);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                continue;
            }
            if (prices_items[i] + prices_items[j] == budget) {
                printf("You can buy item %d and item %d with your budget.\n", i + 1, j + 1);
            }
        }
    }

    return 0;
}
