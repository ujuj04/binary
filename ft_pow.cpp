#include "ft_pow.h"
long long ft_pow(long long a, long long b)
{
    long long p;
    if (b == 0) {
        return (1);
    }
    if (b == 1) {
        return (a);
    }
    if (b > 1) {
        p = a;
        for (int i = 2; i <= b; i++) {
            p = p * a;
        }
    }
    if (b < 0) {
        p = a;
        for (int i = 2; i <= -b; i++) {
            p = p * a;
        }
        p = 1 / p;
    }
    return(p);
}
