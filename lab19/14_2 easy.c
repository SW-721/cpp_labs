#include <stdio.h>
#include <malloc.h>

int main(){
	const int n=3,m=3;
	int arr[m][n],*gap,i,j,c=0,s=1;
	gap=(int *) calloc(2,sizeof(int));
	
	printf("enter index A and index B (from 0 to %d)\n", m-1);
	scanf("%d%d", gap, gap+1);
	
	if(*gap>4 || *(gap+1)>4 || *(gap+1)<0 || *gap<0){
		printf("Error: index can't be more than %d", m-1);
		return 0;
	}
	if(*gap>*(gap+1)){
		printf("Error: B can't be bigger than A");
		return 0;
	}
	
	puts("enter elements of array");
	for(j=0;j<m;j++){
		for(i=0;i<m;i++){
			scanf("%d", &arr[j][i]);
		}
	}
	
	for(j=*gap;j<=*(gap+1);j++){
		for(i=*gap;i<=*(gap+1);i++){
			s=s*arr[j][i];
			c++;
		}
	}
	
	free(gap);
	printf("\nthere is %d\nand it's * equal %d",c,s);
	return 0;
}
