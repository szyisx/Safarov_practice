#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Russian");

    int distance;
    printf("������� ����������: ");
    scanf("%d", &distance);

    if (500 - distance >= 0){
        printf("����� �������");
    }
    else {
        printf("������� ������");
    }

    return 0;
}