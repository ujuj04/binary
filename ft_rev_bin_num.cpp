#include "ft_rev_bin_num.h"
#include"ft_pow.h"

long long ft_rev_bin_num(long long a) {
    long long saved = 0;
    for (int i = 0; a > 0; i++) {
        saved += (a % 10) * ft_pow(2, i);
        a /= 10;
    }

    return saved;
}
