#include <conio.h>
#include <stdio.h>
#include <math.h>

int main () {
	float a, z1, z2, z11, z12;
	printf("enter a\n");
	scanf("%f", &a);
	z11 = sin(M_PI/2+3*a);
	z12 = 1-sin(3*a-M_PI);
	z1 = z11/z12;
	z2 = 1/(tan(5./4*M_PI+3./2*a));
	printf("Z1 = %f \nZ2 = %f \n", z1, z2);
	getch();
}
