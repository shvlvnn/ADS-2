// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double a = 1;
    for (uint16_t i = 1; i <= n; ++i)
        a *= value;
    return a;
}

uint64_t fact(uint16_t n) {
    if (n == 0)
        return 1;
    return n*fact(n-1);
}

double calcItem(double x, uint16_t n) {
    return pown(x, n)/fact(n);
}

double expn(double x, uint16_t count) {
    double e = 0;
    for (uint16_t i = 0; i <= count; ++i)
        e += calcItem(x, i);
    return e;
}

double sinn(double x, uint16_t count) {
    double s = 0;
    for (uint16_t i = 1; i <= count; ++i) {
            s += pown(-1, i-1)*calcItem(x, 2*i-1);
    }
    return s;
}

double cosn(double x, uint16_t count) {
    double c = 0;
    for (uint16_t i = 1; i <= count; ++i) {
        c += pown(-1, i-1)*calcItem(x, 2*i-2);
    }
    return c;
}
