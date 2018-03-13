#include <conio.h>
#include <stdio.h>
#include <math.h>

int main () {
	float a, z1, z2;
	printf("enter alpha (a)\n");
	scanf("%f", &a);
	z1 = cos(a)+sin(a)+cos(3*a)+sin(3*a);
	z2 = 2*sqrt(2)*cos(a)*sin(M_PI/4+2*a);
								//Удалить отсюда
	if (z1 == z2) {
		printf("\nALL CORRECT\n\n");
	}
	else {
		printf("ERROR, check your code"); //alexandr korolev
	}
								//конец удаления
	printf("Z1 = %f \nZ2 = %f \n", z1, z2);
	getch();
}
