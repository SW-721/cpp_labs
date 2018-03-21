#include <stdio.h>
#include <malloc.h>

int main(){
	const int n=3,m=3;
	int **arr,a,b,i,j,c=0,s=1,tmp;
	arr = (int **) malloc (m*n* sizeof(int*));
	
	printf("enter index A and index B (from 0 to %d)\n", m-1);
	scanf("%d%d", &a, &b);
	
	if(a>4 || b>4 || b<0 || a<0){
		printf("Error: index can't be more than %d", m-1);
		return 0;
	}
	if(a>b){
		printf("Error: B can't be bigger than A");
		return 0;
	}
	
	puts("enter elements of array");
	for(j=0;j<m;j++){
		a[j] = (int *)malloc(m * sizeof(int));
		for(i=0;i<m;i++){
			scanf("%d", a[i][j]);
		}
	}
	
	for(j=a;j<=b;j++){
		for(i=a;i<=b;i++){
			tmp = a[i][j];
			s=s*tmp;
			c++;
		}
	}
	printf("there is %d\nand it's * equal %d\n",c,s);
	return 0;
}
