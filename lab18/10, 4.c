#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Rus");
	float 	ax,ay,
			bx,by,
			cx,cy,
			c, a, b, h, p,
			alpha, betta, gamma,
			s=0;
	int type=0, is90=0;
	
	puts("enter [x;y] of 1 point");
	scanf("%f%f", &ax,&ay);
	puts("enter [x;y] of 2 point");
	scanf("%f%f", &bx,&by);
	puts("enter [x;y] of 3 point");
	scanf("%f%f", &cx,&cy);
	
	c=sqrt(pow(ax-bx,2)+pow(ay-by,2));
	a=sqrt(pow(bx-cx,2)+pow(by-cy,2));
	b=sqrt(pow(ax-cx,2)+pow(ay-cy,2));
	
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	
	if(a==0 || b==0 || c==0 || s==0){
		puts("ERROR: не может существовать такого");
		return 0;
	}
	
	alpha= ((acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c)))*180)/M_PI;
	betta= ((acos((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c)))*180)/M_PI;
	gamma= ((acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b)))*180)/M_PI;
	
	if(alpha == 90 || betta == 90 || gamma == 90){
		is90=1;
	} else if(alpha == betta && betta == gamma){
		type=1;
	}
	if(alpha==betta || alpha==gamma || betta==gamma){
		type=2;
	}
	
	
	if(is90==1){
		printf("Треугольник прямоугольный\n");
	} else {
		printf("Треугольник не прямоугольный\n");
	}
	
	switch(type){
		case 1:
			printf("Треугольник равносторонний\n");
			break;
		case 2:
			printf("Треугольник равнобедренный\n");
			break;
		default:
			printf("Треугольник не равнобедренный и не равносторонний\n");
	}
	
	if(s!=0){
		printf("S = %f", s);
	}
	
	return 0;
}
