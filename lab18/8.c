#include<stdio.h>
#include<math.h>

int main(){
	float 	xp,yp,
			xc,yc,
			xr,yr,
			*ptrxr=&xr,
			*ptryr=&yr;
		
	puts("enter X,Y of circle");
	scanf("%f", &xc);
	scanf("%f", &yc);
	
	puts("enter X,Y of point");
	scanf("%f", &xp);
	scanf("%f", &yp);
	
	*ptrxr=xp-xc;
	*ptryr=yp-xc;
	
	printf("Your point is [%.2f;%.2f] from center of circle", *ptrxr, *ptryr);
	return 0;
}
