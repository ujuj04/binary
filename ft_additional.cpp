#include "ft_additional.h"
#include "ft_rev_bin_num.h"
#include "ft_bin_num.h"
unsigned long long ft_additional(long long a)
{
    unsigned long long b = ft_rev_bin_num(a);
    b += 1;
    b = ft_bin_num(b);
    return b;
}