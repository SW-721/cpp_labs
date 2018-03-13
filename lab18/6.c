#include<stdio.h>
#include<math.h>

int main(){
	float x,y,r,diag,
	*ptrdiag=&diag;
	
	puts("enter R of circle");
	scanf("%f", &r);
	
	puts("enter X,Y of point");
	scanf("%f", &x);
	scanf("%f", &y);
	
	*ptrdiag=sqrt(pow(x,2)+pow(y,2));
	
	printf("\n");
	if(*ptrdiag<r){
		puts("point is in circle");
	} else if(*ptrdiag==r){
		puts("point is on the circumference of a circle");
	} else {
		puts("piont is out of circle");
	}
	return 0;
}
