#include "ft_straight.h"
#include "ft_bin_num.h"

long long ft_straight(long long a) {
    int d = 1;
    int b = 0;
    long long res;
    int cot = 0;
    int cot2 = 0;
    long long path = 1;
    if (a >= 0) {
        int bin;
        int act;
        bin = ft_bin_num(a);
        act = bin;
        while (bin > 0) {
            b += 1;
            bin /= 10;
        }
        while (b < 16) {
            cout << "0";
            b += 1;
        }
        cout << act << endl;
    }
    if (a < 0) {
        a = -a;
        while (a > 0) {
            b += (a % 2) * d;
            a /= 2;
            d *= 10;
            cot += 1;
        }
        cot = 16 - cot;
        while (16 > cot2) {
            path *= 10;
            cot2 += 1;
        }
        res = path + b;
        return (res);

    }
}