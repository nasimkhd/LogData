

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define MIN_YEAR 2010
#define MAX_YEAR 2021
#define LOG_DAYS 3


int main() {
    int y, m, Continue = 1;
    const int JAN = 1, DEC = 12;
    double morning, evening, morningSum = 0, eveningSum = 0, morningAverage = 0, eveningAverage = 0, totalAverage = 0;
    int i=0;

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

    for (i = 0; i < LOG_DAYS; i++) {


        switch (m)
        {
        case 1:
            printf("\n%d-JAN-0%d", y, i + 1);
            break;
        case 2:
            printf("\n%d-FEB-0%d", y, i + 1);
            break;
        case 3:
            printf("\n%d-MAR-0%d", y, i + 1);
            break;
        case 4:
            printf("\n%d-APR-0%d", y, i + 1);
            break;
        case 5:
            printf("\n%d-MAY-0%d", y, i + 1);
            break;
        case 6:
            printf("\n%d-JUNE-0%d", y, i + 1);
            break;
        case 7:
            printf("\n%d-JULY-0%d", y, i + 1);
            break;
        case 8:
            printf("\n%d-AUG-0%d", y, i + 1);
            break;
        case 9:
            printf("\n%d-SEP-0%d", y, i + 1);
            break;
        case 10:
            printf("\n%d-OCT-0%d", y, i + 1);
        case 11:
            printf("\n%d-NOV-0%d", y, i + 1);
            break;
        case 12:
            printf("\n%d-DEC-0%d", y, i + 1);
            break;
        }
        
        do {

            printf("\n   Morning rating (0.0-5.0): ");
            scanf(" %lf", &morning);
            if (morning > 5 || morning < 0) printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!");
            else {
                morningSum = morningSum + morning;
            }
        } while (morning > 5 || morning < 0);
        do {
            printf("   Evening rating (0.0-5.0): ");
            scanf(" %lf", &evening);
            if (evening > 5 || evening < 0) printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
            else {
                eveningSum = eveningSum + evening;
            }
        } while (evening > 5 || evening < 0);
    }

    morningAverage = morningSum / LOG_DAYS;
    eveningAverage = eveningSum / LOG_DAYS;
    totalAverage = (morningAverage + eveningAverage) / 2;

    printf("\nSummary\n");
    printf("=======\n");
    printf("Morning total rating: %.3lf\n", morningSum);
    printf("Evening total rating: %.3lf\n", eveningSum);
    printf("----------------------------\n");
    printf("Overall total rating: %.3lf\n\n", (morningSum + eveningSum));
    printf("Average morning rating:  %.1lf\n", morningAverage);
    printf("Average evening rating:  %.1lf\n", eveningAverage);
    printf("----------------------------\n");
    printf("Average overall rating:  %.1lf\n", totalAverage);


    return 0;
}
