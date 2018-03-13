#include<conio.h>
#include<stdio.h>


int main(){
	const int n=10;
	int i, ib=0, a[n], b[n];
	
	puts("enter the array");
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++){
		if(i%2==0 && a[i]>0){
			b[ib]=a[i];
			ib++;
		}
	}
	
	printf("\n~~~~OUTPUT~~~~\n\n");
	
	
	if(ib==0)
		printf("there is no such elements");
	else
		for(i=0; i<ib; i++)
			printf("#%d = %d\n", i+1, b[i]);
	
	
	getch();
}
