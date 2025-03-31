#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
    // Налаштування локалі для підтримки української мови
    setlocale(LC_ALL, "Ukrainian");
    double a, b, c;
    double volume, surface_area;

    // Запитуємо користувача ввести довжини ребер
    printf("Введiть довжину ребра a: ");
    scanf("%lf", &a);

    printf("Введiть довжину ребра b: ");
    scanf("%lf", &b);

    printf("Введiть довжину ребра c: ");
    scanf("%lf", &c);

    // Обчислюємо об'єм паралелепіпеда
    volume = a * b * c;

    // Обчислюємо площу поверхні паралелепіпеда
    surface_area = 2 * (a * b + b * c + a * c);

    // Виводимо результати
    printf("Об'єм прямокутного паралелепiпеда: %.2lf куб. од.\n", volume);
    printf("Площа поверхнi прямокутного паралелепiпеда: %.2lf кв. од.\n", surface_area);

    return 0;
}
