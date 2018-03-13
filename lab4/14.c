#include <stdio.h>
#include <math.h>

int main () {
	float m, n, z1, z11, z12, z2;
	
	printf("enter m and n\n");
	scanf("%f", &m);
	scanf("%f", &n);
	
	z11 = (m-1) * sqrt(m) - (n-1)*sqrt(n);
	z12 = sqrt(pow(m, 3)*n) + n*m + pow(m, 2) - m; 
	
	z1 = (z11)/(z12);
	z2 = (sqrt(m)-sqrt(n))/m;
	
	printf("Z1 = %f \nZ2 = %f \n", z1, z2);
	getch();
}
