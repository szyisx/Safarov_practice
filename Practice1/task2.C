#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Russian");

    int distance;
    printf("Введите расстояние: ");
    scanf("%d", &distance);

    if (500 - distance >= 0){
        printf("Можно доехать");
    }
    else {
        printf("Доехать нельзя");
    }

    return 0;
}