#include <conio.h>
#include <stdio.h>

int main(){
	const int m=3, n=3;
	int i,j,k=0,array[m][n], a, b;
	float s=1;
	
	printf("enter (A; B)\n");
	scanf("%d%d", &a, &b);
	
	if(a>b){
		k=a;
		a=b;
		b=k;
		k=0;
	}
	
	printf("enter elements of array[][] \n");
		
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("#%d_%d \t",i, j);
			scanf("%d", &array[i][j]);
		}
	}
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(array[i][j] <= b && array[i][j] >= a){
				k++;
				s=s*array[i][j];
			}
		}
	}
	
	if(k!=0){
		s=s/k;
		printf("avg of a[m][n] is %.2f \nand count = %d", s, k);
	} else printf("there is no such elements");
	getch();
	
}
