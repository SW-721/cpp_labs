#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <locale.h> //для русского языка

int main () {
	setlocale(0, "");
	float a, z1, z2;
	printf("Введите альфа (a)\n");
	scanf("%f", &a);
	z1 = 2*pow(sin(3*M_PI-2*a), 2)*pow(cos(5*M_PI-2*a), 2);
	z2 = 1./4 - 1./4*sin(5./2*M_PI-8*a);
								//Удалить отсюда
	if (z1 == z2) {
		printf("\nВсё хорошо!\n\n");
	}
	else {
		printf("Где-то ты ошибся"); //alexandr korolev
	}
								//конец удаления
	printf("Z1 = %f \nZ2 = %f \n", z1, z2);
	getch();
}
