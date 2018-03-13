#include <conio.h>
#include <stdio.h>
#include <math.h>

int main () {
	float a, z1, z2;
	printf("enter alpha (a)\n");
	scanf("%f", &a);
	z1 = pow(cos(3./8*M_PI-a/4), 2)-pow(cos(11./8*M_PI-a/4), 2);
	z2 = sqrt(2)/2*sin(a/2);
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
