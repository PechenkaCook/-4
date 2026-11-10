#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
    int16_t t1, t2;

    if (scanf("%" SCNd16 " %" SCNd16, &t1, &t2) == 2) {
        if (t1 == 0) {
            puts("Error: t1 must be nonzero.");
        } else {
            float result = ((float)t1 - t2) / t1 * 100.0f;
            printf("%.2f%%\n", result);
        }
    }

    printf("sizeof(int16_t) = %llu\n", (unsigned long long)sizeof(int16_t));
    printf("sizeof(float) = %llu\n", (unsigned long long)sizeof(float));
    printf("sizeof(double) = %llu\n", (unsigned long long)sizeof(double));
    printf("sizeof(int) = %llu\n", (unsigned long long)sizeof(int));
    printf("sizeof(unsigned long long) = %llu\n",
           (unsigned long long)sizeof(unsigned long long));
    return 0;
}