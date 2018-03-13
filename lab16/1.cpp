#include<conio.h>
#include<stdio.h>
#include<string.h>

int main(){
	const int n=30; //длинна строки
	int i;
	char str[n];
	
	gets(str);
	for(i=0; i<n; i++){
		if(str[i]==':'){
			if(n/2<i)
				str[i]='.';
			else str[i]='!';
		}
	}
	puts(str);
	getch();
}
