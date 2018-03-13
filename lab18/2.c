#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
	int a,b,c,d,ans;
	int *ptrans=&ans;
	
	puts("enter A, B, C, D");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	
	if(a!=b && a!=c && a!=d && b!=c && b!=d && d!=c){
		*ptrans = a+b+c+d;
	} else if(a==b && a==c && a==d && b==c && b==d && d==c){
		*ptrans = a*4;
	} else if(a==b && c==d){
		*ptrans = (a+b)*(c+d);
	} else {
		*ptrans = (a-b)*(c-d);
	}
	
	printf("ans = %d", *ptrans);
	
	return 0;
}


