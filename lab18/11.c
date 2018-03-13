#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Rus");
	float 	ax1,ay1,bx1,by1,cx1,cy1,a1,b1,c1,s1=0,p1=0,
			ax2,ay2,bx2,by2,cx2,cy2,a2,b2,c2,s2=0,p2=0;
	
	puts("enter [x;y] of 1 point 1st triangle");
	scanf("%f%f", &ax1,&ay1);
	puts("enter [x;y] of 2 point 1st triangle");
	scanf("%f%f", &bx1,&by1);
	puts("enter [x;y] of 3 point 1st triangle");
	scanf("%f%f", &cx1,&cy1);
	
	c1=sqrt(pow(ax1-bx1,2)+pow(ay1-by1,2));
	a1=sqrt(pow(bx1-cx1,2)+pow(by1-cy1,2));
	b1=sqrt(pow(ax1-cx1,2)+pow(ay1-cy1,2));
	
	p1=(a1+b1+c1)/2;
	s1=sqrt(p1*(p1-a1)*(p1-b1)*(p1-c1));
	
	if(a1==0 || b1==0 || c1==0 || s1==0){
		puts("ERROR: не может существовать такого треугольника");
		return 0;
	}
	
	puts("\nenter [x;y] of 1 point 2st triangle");
	scanf("%f%f", &ax2,&ay2);
	puts("enter [x;y] of 2 point 2st triangle");
	scanf("%f%f", &bx2,&by2);
	puts("enter [x;y] of 3 point 2st triangle");
	scanf("%f%f", &cx2,&cy2);
	
	c2=sqrt(pow(ax2-bx2,2)+pow(ay2-by2,2));
	a2=sqrt(pow(bx2-cx2,2)+pow(by2-cy2,2));
	b2=sqrt(pow(ax2-cx2,2)+pow(ay2-cy2,2));
	
	p2=(a2+b2+c2)/2;
	s2=sqrt(p2*(p2-a2)*(p2-b2)*(p2-c2));
	
	if(a2==0 || b2==0 || c2==0 || s2==0){
		puts("ERROR: не может существовать такого треугольника");
		return 0;
	}
	
	if(s1>s2){
		printf("Площадь 1 треугольника больше и равна %f",s1);
	} else if(s2>s1){
		printf("Площадь 2 треугольника больше и равна %f",s2);
	} else if(s1==s2){
		printf("Площади треугольников равны между собой и равны %f",s2);
	} else {
		puts("Oooops... something wrong");
	}

	return 0;
}
