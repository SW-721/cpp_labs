#include <conio.h>
#include <stdio.h>

int main(){
	int a;
	printf("enter num \n");
	scanf("%d", &a);
	a = a % 4;
	switch(a){
		case 0:
			printf("N=4k");
			break;
		case 1:
			printf("N=4k+1");
			break;
		case 2:
			printf("N=4k+2");
			break;
		case 3:
			printf("N=4k+3");
			break;
		default:
			printf("error");
			break;
	}
	getch();
}
