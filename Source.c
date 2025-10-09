#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    int num;

    printf("Введите трехзначное число: ");
    scanf("%d", &num);

    int units = num % 10;         
    int tens = (num / 10) % 10;   

    printf("Число десятков: %d\n", tens);
    printf("Число единиц: %d\n", units);

    return 0;
}