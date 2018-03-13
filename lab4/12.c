#include <conio.h>
#include <stdio.h>
#include <math.h>

int main () {
	float a, z1, z2;
	
	printf("enter a\n");
	scanf("%f", &a);
	
	z1 = sin(4*a)/(1+cos(4*a))*cos(2*a)/(1+cos(2*a));
	z2 = 1/tan(3./2*M_PI-a);
	
								//Удалить отсюда
	if (z1 == z2) {
		printf("\nALL CORRECT\n\n");
	}
	else {
		printf("ERROR, check your code \n"); //alexandr korolev
	}
								//конец удаления
								
	printf("Z1 = %f \nZ2 = %f \n", z1, z2);
	getch();
}
