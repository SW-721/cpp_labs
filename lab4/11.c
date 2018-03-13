#include <conio.h>
#include <stdio.h>
#include <math.h>

int main () {
	float a, z1, z2, z11, z12, z21, z22;
	
	printf("enter a\n");
	scanf("%f", &a);
	
	z11 = 1-2*pow(sin(a), 2);
	z12 = 1+sin(2*a);
	
	z21 = 1-tan(a);
	z22 = 1+tan(a);
	
	z1 = z11/z12;
	z2 = z21/z22;
	
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
