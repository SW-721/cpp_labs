#include<stdio.h>

int main(){
	int k=0;
	float a,b,c;
	float 	*pa=&a,
			*pb=&b,
			*pc=&c;
	
	puts("enter triangle's parts");
	scanf("%f", pa);
	scanf("%f", pb);
	scanf("%f", pc);
	
	if(a>0&&b>0&&c>0){
		if(a==b&&a==c&&c==b){
			k=3;
		} else if(a==b||a==c||c==b){
			k=2;
		} else k=1;
	} else k=0;
	
	printf("\nk = %d\n\n", k);
	printf("0 - not a triangle\n1 - triangle\n2 - 2 parts are simmilar\n3 - 3 parts are simmilar\n");
	return 0;
}
