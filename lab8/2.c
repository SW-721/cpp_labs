#include <conio.h>
#include <stdio.h>

int main(){
	int a;
	printf("enter full num \n");
	scanf("%d", &a);
	a = a % 10;
	switch(a){
		case 0:
			printf("last num of ^2 will be: 0");
			break;
		case 1:
			printf("last num of ^2 will be: 1");
			break;
		case 2:
			printf("last num of ^2 will be: 4");
			break;
		case 3:
			printf("last num of ^2 will be: 9");
			break;
		case 4:
			printf("last num of ^2 will be: 6");
			break;
		case 5:
			printf("last num of ^2 will be: 5");
			break;
		case 6:
			printf("last num of ^2 will be: 6");
			break;
		case 7:
			printf("last num of ^2 will be: 9");
			break;
		case 8:
			printf("last num of ^2 will be: 4");
			break;
		case 9:
			printf("last num of ^2 will be: 1");
			break;
		default:
			printf("error");
			break;
	}
	getch();
}
