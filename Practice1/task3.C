#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Russian");

    char symbol;

    printf("Введите символ: ");
    scanf("%c", &symbol);

    if (symbol >= 'A' && symbol <= 'Z'){
        printf("символ входит в диапозон");
    }
    else {
        printf("символ не входит в диапозон");
    }

    return 0;
}