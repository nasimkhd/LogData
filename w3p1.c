
#include <stdio.h>
#define MIN_YEAR 2010
#define MAX_YEAR 2021
#define _CRT_SECURE_NO_WARNINGS

int main() {
    int y, m, Continue = 1;
    const int JAN = 1, DEC = 12;
    printf("General Well-being Log\n");
    printf("======================\n");
    while (Continue) {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &y, &m);

        if (y<MIN_YEAR || y>MAX_YEAR) {
            printf("   ERROR: The year must be between 2010 and 2021 inclusive\n");
        }
        if (m< JAN || m>DEC) {
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
        }
        if (y <= MAX_YEAR && y >= MIN_YEAR && m >= JAN && m <= DEC) {
            Continue = 0;
        }
    }
    printf("\n*** Log date set! ***\n");
    switch (m)
    {
    case 1:
        printf("\nLog starting date: %d-JAN-01", y);
        break;
    case 2:
        printf("\nLog starting date: %d-FEB-01", y);
        break;
    case 3:
        printf("\nLog starting date: %d-MAR-01", y);
        break;
    case 4:
        printf("\nLog starting date: %d-APR-01", y);
        break;
    case 5:
        printf("\nLog starting date: %d-MAY-01", y);
        break;
    case 6:
        printf("\nLog starting date: %d-JUNE-01", y);
        break;
    case 7:
        printf("\nLog starting date: %d-JULY-01", y);
        break;
    case 8:
        printf("\nLog starting date: %d-AUG-01", y);
        break;
    case 9:
        printf("\nLog starting date: %d-SEP-01", y);
        break;
    case 10:
        printf("\nLog starting date: %d-OCT-01", y);
        break;
    case 11:
        printf("\nLog starting date: %d-NOV-01", y);
        break;
    case 12:
        printf("\nLog starting date: %d-DEC-01", y);
        break;
    default:
        break;
    }
    return 0;
}
