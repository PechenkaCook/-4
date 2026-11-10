#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n;
    int count = 0;
    unsigned long long value = 1;

    if (scanf("%d", &n) == 1 && n > 0) {
        while (count < n) {
            printf("%s%llu", count == 0 ? "" : " ", value);
            // count++ возвращает старое значение, а ++count — новое
            // увеличиваем счётчик после вывода, чтобы он хранил число выведенных элементов
            count++;
            if (count == n) {
                break;
            }
            if (value > ULLONG_MAX / 1000) {
                printf("\nRemaining terms exceed the integer range.");
                break;
            }
            value *= 1000;
        }
        putchar('\n');
    }
    return 0;
}
