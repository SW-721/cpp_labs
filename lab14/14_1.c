#include <conio.h>
#include <stdio.h>

int main(){
	const int m=3, n=3;
	int i,j,k=0,a[m][n];
	float s=0;
	
	printf("enter elements of array[][] \n");
		
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("#%d_%d \t",i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(a[i][j] < 0){
				k++;
				s=s+a[i][j];
			}
		}
	}
	
	if(k!=0){
		s=s/k;
		printf("avg of a[m][n] is %.2f", s);
	} else printf("there is no such elements");
	getch();
	
}
