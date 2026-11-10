#include <stdio.h>

#define KJ_PER_MJ 1000

int main(void)
{
    long long kj;

    while (scanf("%lld", &kj) == 1 && kj > 0) {
        // при делении целых чисел дробная часть отбрасывается
        printf("%lld MJ %lld kJ\n", kj / KJ_PER_MJ, kj % KJ_PER_MJ);
    }
    return 0;
}
