#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	float 	ir, or, x, y, diag,
			*ptrdiag=&diag;
		
	puts("enter inner, than outer radius");
	scanf("%f", &ir);
	scanf("%f", &or);
	
	if(ir>or){
		system("cls");
		puts("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nERROR: inner radius can't be bigger than outer");
		return 1;
	}
	
	puts("enter X,Y of point");
	scanf("%f", &x);
	scanf("%f", &y);
	
	diag = sqrt(pow(x,2)+pow(y,2));
	
	if(diag>ir && diag<or){
		printf("point [%.2f;%.2f] is on ring",x,y);
	} else {
		puts("your point is not on ring");
	}
	
	return 0;
}
