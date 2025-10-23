#include <stdio.h>

int main() {
    int booked[10] = {0, 0, 0, 1, 1, 0, 1, 0, 1, 1};
    int seat;
    int successfullBookings = 0;
    do {
        printf("Enter seat number to book: ");
        scanf("%d", &seat);

        if (booked[seat] == 0) {
            booked[seat] = 1;
            printf("Seat number %d has been booked.\n", seat);
            successfullBookings++;
        } else {
            printf("Seat number %d can not be booked.\n", seat);
        }
    } while (successfullBookings != 5);

    return 0;
}
