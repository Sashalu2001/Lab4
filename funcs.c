#include <math.h>

double summ(double a, double b, double c) {
    return (a + b + c);
}

double mult(double a, double b, double c) {
    double p = summ(a, b, c) / 2;
    return (sqrt(p*(p-a)*(p-b)*(p-c)));
}