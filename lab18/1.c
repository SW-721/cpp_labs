#include<stdio.h>
#include<math.h>

int main(void){
	int x,y,z,pmin, pmax, max1, max2, min1, min2;
	
	puts("enter X, Y, Z");
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	
	max1 = x+y+z;
	max2 = x*y*z;
	
	min1 = pow(x, 2) + pow(y,2);
	min2 = pow(y, 2) + pow(z,2);
	
	pmax=max(max1, max2) + 3;
	pmin=min(min1, min2) - 4;
	
	printf("min = %d\nmax = %d", pmin, pmax);
	
	return 0;
}

int min(int a, int b){
	if(b<a){
		return b;
	} else
	return a;
}

int max(int a, int b){
	if(a>b){
		return a;
	} else 
	return b;
}
