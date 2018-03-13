#include <conio.h>
#include <stdio.h>
#include <math.h>

int main () {
	float x, fx, y, z, fz, w, w1, w2;
	
	printf("enter x, y and z\n");
	printf("x: ");
	scanf("%f", &fx);
	
	printf("y: ");
	scanf("%f", &y);
	
	printf("z: ");
	scanf("%f", &fz);
	
	x = fx*pow(10, -4);
	z = fz*pow(10, -3);
	
	w1 = pow(fabs(cos(x)-cos(y)), (1+2*pow(sin(y), 2)));
	w2 = (1 + z + pow(z, 2)/2 + pow(z, 3)/3 + pow(z, 4)/4);
	
	w = w1*w2;
	
	
								//Удалить отсюда
	if (w == 1.9873) {
		printf("\nALL CORRECT\n\n");
	}	else {
		printf("ERROR \n"); //alexandr korolev
	}
								//конец удаления
								
								
								
								
	printf("w = %f \n", w);
	getch();
}

