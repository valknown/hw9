#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define M_PI 3.14159265358979323846

int main(void)
{
    char c, cont;
    int h, b, i, j, w;
    double a, cot;

    setlocale(LC_CTYPE, "RUS");

    do {
        printf("Введите символ:\n");
        scanf(" %c", &c);

        printf("Введите высоту h:\n");
        scanf("%d", &h);

        printf("Введите верхнее основание b:\n");
        scanf("%d", &b);

        printf("Введите угол a:\n");
        scanf("%lf", &a);

        cot = 1. / tan(a * M_PI / 180.);

        printf("Прямоугольная трапеция:\n\n");

        for (i = 0; i < h; i++) {
            w = b + (int)floor(i * cot + 0.5);

            for (j = 0; j < w; j++)
                putchar(c);
            putchar('\n');
        }

        printf("\nПродолжить? (Да - введите y, Нет - введите n)\n");
        scanf(" %c", &cont);
    } while (cont != 'n');

    return 0;
}