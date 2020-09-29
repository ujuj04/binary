#include "ft_reverse.h"

long long ft_reverse(long long a) {
    unsigned long long b = 0;
    long long k = 1;
    while (a) {
        if ((a % 10) == 0) {
            b += 1 * k;
        }
        k *= 10;
        a /= 10;
    }
    b += 10000000000000000;
    return b;
}