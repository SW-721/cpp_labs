#include <conio.h>
#include <stdio.h>
#include <math.h>

int main () {
	float a, z1, z2;
	printf("enter alpha (a)\n");
	scanf("%f", &a);
	z1 = cos(a)+cos(2*a)+cos(6*a)+cos(7*a);
	z2 = 4*cos(a/4)*cos(5./2*a)*cos(4*a);
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

