//ввести 3 числа, найти произведение 2 больших использу€ формулу a*b*c/min(a,b,c)

#include<stdio.h>

int main(){
	int a,b,c, ans;
	int *ptrans = &ans;
	
	puts("enter a,b,c");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	*ptrans=a*b*c/min(a,b,c);
	
	printf("ans = %d", *ptrans);
	return 0;
}

int min(int a, int b, int c){
	if(b<a && b<c){
		return b;
	} else if(c<a && c<b){
		return c;
	}
	return a;
}

int max(int a, int b, int c){
	if(b>a && b>c){
		return b;
	} else if(c>a && c>b){
		return c;
	}
	return a;
}
