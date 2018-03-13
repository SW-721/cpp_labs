#include <conio.h>
#include <stdio.h>
#include <math.h>

int main () {
	float x, y, z, fz, t, t1, t2, t3;
	printf("enter x, y and z\n");
	scanf("%f", &x);
	scanf("%f", &y);
	scanf("%f", &fz);
	z = fz*pow(10, -2);
	t1 = 2*cos(x-M_PI/6);
	t2 = 1./2+pow(sin(y), 2);
	t3 = 1+((pow(z, 2))/(3-pow(z, 2)/5));
	t = t1/t2*(t3);
								//Удалить отсюда
	if (t == 0.564846) {
		printf("\nALL CORRECT\n\n");
	}	else {
		printf("ERROR, check your code \n"); //alexandr korolev
	}
								//конец удаления
	printf("t = %f \n", t);
	getch();
}
