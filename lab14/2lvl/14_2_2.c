#include <conio.h>
#include <stdio.h>

int main(){
	const int m=3, n=3;
	int i,j,k,d=0,a[m][n];
	
	printf("enter elements of array[][] \n");
		
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("#%d_%d \t",i, j);
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<m; i++){
		k=0;
		for(j=0; j<n; j++){
			if(a[j][i]==0){
				k++;
			}
		}
		if (k == 0){
			d++;
		}
	}
	
	printf("count stobs without zero is %d", d);
	getch();
}
