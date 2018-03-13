#include <conio.h>
#include <stdio.h>
#include <math.h>

int main () {
	float a, b, z1, z2, z11, z12, z21, z22;
	printf("enter a and b\n");
	scanf("%f", &a);
	scanf("%f", &b);
	z11 = pow(cos(a)-cos(b), 2);
	z12 = pow(sin(a)-sin(b), 2);
	z21 = -4*pow(sin((a-b)/2), 2);
	z22 = cos(a+b);
	z1 = z11-z12;
	z2 = z21*z22;
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
