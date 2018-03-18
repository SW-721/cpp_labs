#include <stdio.h>
#include <math.h>
#include <conio.h>

int main () {
	float x, z1, z2,
	z11, z12, z13, z14;
	
	printf("enter a and b\n");
	scanf("%f", &x);

	z11 = pow(x, 2)+2*x-3;
	z12 = (x+1)*sqrt(pow(x, 2) - 9);
	z13 = pow(x, 2)+2*x-3;
	z14 = (x-1)*sqrt(pow(x, 2) - 9);

	
	z1 = ((z11)+(z12))/((z13)+(z14));
	z2 = pow((x+3) / (x-3), 1/2);
	
								//удалить отсюда
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
