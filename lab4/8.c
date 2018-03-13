#include <conio.h>
#include <stdio.h>
#include <math.h>

int main () {
	float x, y, z1, z2;
	printf("enter x and y\n");
	scanf("%f", &x);
	scanf("%f", &y);
	z1 = pow(cos(x), 4)+pow(sin(y), 2)+1./4*pow(sin(2*x), 2)-1;
	z2 = sin(y+x)*sin(y-x);
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
