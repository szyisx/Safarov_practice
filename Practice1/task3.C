#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Russian");

    char symbol;

    printf("������� ������: ");
    scanf("%c", &symbol);

    if (symbol >= 'A' && symbol <= 'Z'){
        printf("������ ������ � ��������");
    }
    else {
        printf("������ �� ������ � ��������");
    }

    return 0;
}