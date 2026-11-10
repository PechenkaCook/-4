#include <stdio.h>

int main(void)
{
    long long n;

    if (scanf("%lld", &n) == 1) {
        long long divisor = 2;

        while (divisor <= n / divisor && n % divisor != 0) {
            divisor++;
        }

        // оператор += прибавляет слагаемое, а *= умножает накопленное произведение на очередной множитель
        // здесь счётчик перебирает возможные делители числа
        puts(n >= 2 && divisor > n / divisor ? "Prime" : "Not prime");
    }
    return 0;
}