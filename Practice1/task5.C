#include <stdio.h>
#include <math.h>
#include <locale.h>


int main() {

    setlocale(LC_ALL, "Russian");

    double calculatedSpeed, actualSpeed;

        printf("Введите расчетную скорость (м/с): ");
    scanf("%lf", &calculatedSpeed);
    
    printf("Введите фактическую скорость (м/с): ");
    scanf("%lf", &actualSpeed);

    
    if (fabs(calculatedSpeed - actualSpeed) > 0.1) {
        printf("Орбита нестабильна.\n");
    } else {
        printf("Орбита стабильна.\n");
    }

    return 0;
}
