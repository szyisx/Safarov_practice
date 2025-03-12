#include <stdio.h>
#include <locale.h>


int main() {

    setlocale(LC_ALL, "Russian");

	int date;

	scanf("%d", &date);
	if (date > 20250210) {
		puts("Ты в будущем");
		return 0;
	}
	if (date == 20250210) {
		puts("ты в настоящем");
	}
	else {
		puts("ты в прошлом");
	}
}