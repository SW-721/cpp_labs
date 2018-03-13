#include <conio.h>
#include <stdio.h>
#include <math.h>

int main () {
	float a, z1, z2;
	printf("enter beta (a)\n");
	scanf("%f", &a);
	z1 = 1-1./4 * pow(sin(2*a), 2)+cos(2*a);
	z2 = pow(cos(a), 2) + pow(cos(a), 4);
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
