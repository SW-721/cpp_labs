#include <conio.h>
#include <stdio.h>

int main(){
	int d, m, year, y, c, result;
	printf("enter day, mounth and year \n");
	
	scanf("%d", &d);
	scanf("%d", &m);
	scanf("%d", &year);
	
	if (d > 31 || m > 12) {
		printf("WRONG DATE");
		return main;
	}
	
	y=year%100;
	c=(year/100)%10;
	
	printf("y = %d \n", y);
	printf("c = %d \n", c);
	
	result = (d + (1./5 * ( 13 * m - 1 )) + y + y/4 + c/4 - 2*c + 777);
	result = result%7;
	
	printf("res = %d \n", result);
	
	switch (result) {
		case 0: printf("Vtornik"); break;	//Вторник
		case 1: printf("Sreda"); break;	//Среда
		case 2: printf("Chetverg"); break;	//Четверг
		case 3: printf("Piatnicca"); break;	//Пятница
		case 4: printf("Subbota"); break;	//Суббота
		case 5: printf("Voskresenie"); break;	//Воскресенье
		case 6: printf("Ponedelnik"); break;	//Понедельник
		default: printf("some kinda error"); break;
	}
	getch();
}
