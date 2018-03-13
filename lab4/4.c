#include <conio.h>
#include <stdio.h>
#include <math.h>

int main () {
	float b, z1, z2;
	printf("enter beta (b)\n");
	scanf("%f", &b);
	z1 = pow(cos(3./8*M_PI-b/4), 2)-pow(cos(11./8*M_PI+b/4), 2);
	z2 = sqrt(2)/2*sin(b/2);
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
