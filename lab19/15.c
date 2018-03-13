#include<malloc.h>
#include<stdio.h>


int main(){
	const int n=5;
	int a[n],i,*x, c=0;
	x=(int *) calloc(n,sizeof(int));
	
	puts("enter 5 items. 3 symbols each");
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<n;i++){	
		if(a[i]%3!=0){
			*(x+c)=a[i];
			c++;
		}
	}
	
	for(i=0;i<c;i++){
		printf("#%d. %d\n",i+1 ,*(x+i));
	}
	free(x);
	return 0;
}
