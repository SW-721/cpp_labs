#include<conio.h>
#include<stdio.h>
#include<string.h>

int main(){
	const int n=30; //длинна строки
	int i, k=0;
	char str[n], a[1], b[1];
	
	printf("enter letter - ");
	gets(b);
	
	printf("#1~~~\n");
	
	printf("enter string\n");
	gets(str);
	
	printf("\n#2~~~\n");
	
	a[0]=str[0];
	printf("\n#3~~~\n");
	
	for(i=0; i<strlen(str); i++){
		if(str[i]==' ' ){
			if(strcmp(a,b)==0){
				k++;
			}
		}
		a[0]=str[i];
		puts(a);
	}
	
	printf("There is %d words ends with '%c'", k, b[0]);

	getch();
}
