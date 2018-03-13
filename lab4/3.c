#include <conio.h>
#include <stdio.h>
#include <math.h>

int main () {
	float a, z1, z2, m, n;
	printf("enter alpha (a)\n");
	scanf("%f", &a);
	m = sin(2*a)+sin(5*a)-sin(3*a);
	n = cos(a)+1-2*pow(sin(2*a), 2);
	z1 = m/n;
	z2 = 2*sin(a);
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
