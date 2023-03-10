#include <stdio.h>
#include <stdlib.h>
#include "funcs.c"

int main() {
    system("chcp 65001");

    double a, b, c;
    printf("Введите длину стороны a :");
    scanf("%lf", &a);
    printf("Введите длину стороны b :");
    scanf("%lf", &b);
    printf("Введите длину стороны c :");
    scanf("%lf", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Периметр треугольника :%.2lf\n", summ(a, b, c));
        printf("Площадь треугольника :%.2lf\n", mult(a, b, c));
    } else printf("Такого треугольника не существует");

    return 0;
}
