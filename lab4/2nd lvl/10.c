#include <conio.h>
#include <stdio.h>
#include <math.h>

int main () {
	float x, fx, y, fy, z, a, a1, a2, a3;
	
	printf("enter x, y and z\n");
	printf("x: ");
	scanf("%f", &fx);
	
	printf("y: ");
	scanf("%f", &y);
	
	printf("z: ");
	scanf("%f", &fy);
	
	x = fx*pow(10, -2);
	y = fy*pow(10, 3);
	
	a1 = pow(2, -x);
	a2 = sqrt(x+pow(fabs(y), 1/4));
	a3 = pow(exp(x-1/sin(z)), 1/3);
	
	a = a1*a2*a3;
	
	
								//Удалить отсюда
	if (a == 1.26185) {
		printf("\nALL CORRECT\n\n");
	}	else {
		printf("ERROR \n"); //alexandr korolev
	}
								//конец удаления
								
								
								
								
	printf("a = %f \n", a);
	getch();
}

