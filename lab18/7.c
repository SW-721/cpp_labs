#include<stdio.h>
#include<math.h>

int main(){
	float 	cir_s, cir_r,
			squ_s, squ_p;				
	
	puts("enter S of circle");
	scanf("%f", &cir_s);
	
	puts("enter S of square");
	scanf("%f", &squ_s);
	
	cir_r=sqrt(cir_s/3.14);
	
	squ_p=sqrt(squ_s);
	
	squ_p=sqrt(2*pow((squ_p/2),2));
	
	printf("\n");
	if(squ_p<=cir_r){
		puts("square can be in circle");
	} else {
		puts("square bigger than circle");
	}
	
	return 0;
}
