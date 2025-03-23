#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Ukrainian");

    double a, b, c, volume, surface_area;
    char choice = 'y';

    do {
        printf("Введіть довжини ребер a, b, c: ");
        if (scanf_s("%lf %lf %lf", &a, &b, &c) != 3 || a <= 0 || b <= 0 || c <= 0) {
            printf("Некоректні дані! Спробуйте ще раз.\n");
            while (getchar() != '\n'); // Очищення буфера вводу
            continue;
        }

        volume = a * b * c;
        surface_area = 2 * (a * b + a * c + b * c);
        printf("Об'єм: %.2lf, Площа поверхні: %.2lf\n", volume, surface_area);

        printf("Повторити? (y/n): ");
        if (scanf_s(" %c", &choice, 1) != 1) { // Додаємо розмір буфера для `char`
            printf("Помилка введення! Завершення програми.\n");
            break;
        }

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
