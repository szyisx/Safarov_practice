#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int mass;
    printf("������� ���� ����� � ��: ");
    scanf("%d", &mass);

    if (mass >= 60 && mass <= 90) {
        printf("�� ������ ������ ����� �� �����!\n");
    } else {
        printf("��������, ���� ����� �� ������������� �����������.\n");
    }

    return 0;
}