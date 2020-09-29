#include "ft_bin_num.h"

long long ft_bin_num(long long a)
{
	long long t = 0;
	long long d = 1;
	while (a > 0) {
		t += (a % 2) * d;
		a /= 2;
		d = d * 10;
	}
	return t;
}
