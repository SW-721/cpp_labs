#include <conio.h>
#include <stdio.h>
#include <math.h>

int main () {
	float x, y, z, w, t1, t2, t3;
	printf("enter x, y and z\n");
	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%f", &z);
	w = pow(fabs(cos(x)-cos(y)), 1+2*pow(sin(y),2)) * (1 + z + (pow(z, 2)/2) + (pow(z, 3)/3) + (pow(z, 4)/4));
								//Удалить отсюда
	if (t == 1.9873) {
		printf("\nALL CORRECT\n\n");
	}	else {
		printf("ERROR, check your code \n"); //alexandr korolev
	}
								//конец удаления
	printf("t = %f \n", t);
	getch();
}
