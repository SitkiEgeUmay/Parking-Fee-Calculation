#include <stdio.h>

int main() {
    int hourlyRate = 5, day, hour, amount, i, totalAmount = 0;

    for (i = 0; i <= 10; i++) {
        printf("How many hours did you stay and on which day did you park?\n");
        scanf("%d%d", &hour, &day);

        if (day == 2 || day == 5) {
            amount = (hourlyRate * hour) + (hourlyRate * hour * 0.1);
        } else if (hour >= 10) {
            hourlyRate = 10;
            amount = hourlyRate * hour;
        } else {
            amount = hourlyRate * hour;
        }

        totalAmount += amount;
    }

    printf("Total amount: %d TL\n", totalAmount);

    return 0;
}

