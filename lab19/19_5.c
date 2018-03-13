#include<malloc.h>
#include<stdio.h>
#include<math.h>

int main(){
	const int n=5;
	int a[n],i,*x, c=0, s;
	float sf;
	x=(int *) calloc(n,sizeof(int));
	
	puts("enter 5 items.");
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}

	for(i=0; i<n;i++){
		s =sqrt(a[i]);
		sf=sqrt(a[i]);
		
		if(s==sf){
			*(x+c)=a[i];
			c++;
		}
	}
	
	puts("");
	for(i=0;i<c;i++){
		printf("#%d. %d\n",i+1 ,*(x+i));
	}
	
	free(x);
	return 0;
}
