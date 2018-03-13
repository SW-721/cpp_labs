#include<conio.h>
#include<stdio.h>
#include<string.h>

int main(){
	const int n=30; //длинна строки
	int i, k=0, c=0;
	char str[n];
	
	gets(str);
	for(i=0; i<n; i++){
		if(str[i]=='.'){
			k++;
		}
		if(str[i]=='*'){
			c++;
			break;
		}
	}
	if(c>0){
		printf("There is %d number before '*'", k);
	} else {
		printf("There is no number before '*'");
	}
	getch();
}
