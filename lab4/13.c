#include <stdio.h>
#include <math.h>

int main () {
	float a, b, z1, z2;
	
	printf("enter a and b\n");
	scanf("%f", &a);
	scanf("%f", &b);
	
	z1 = (sin(a)+cos(2*b-a))/(cos(a)-sin(2*b-a));
	z2 = (1+sin(2*b))/cos(2*b);
	
								//Удалить отсюда
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
