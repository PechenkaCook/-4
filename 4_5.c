#include <stdio.h>

double day_to_hr(double days)
{
    const double HOURS_PER_DAY = 24.0;
    return days * HOURS_PER_DAY;
}

int main(void)
{
    double value;

    while (scanf("%lf", &value) == 1) {
        printf("%.2f\n", day_to_hr(value));
    }
    return 0;
}