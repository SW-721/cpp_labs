#include<malloc.h>
#include<stdio.h>


int main(){
	const int n=5;
	int a[n],i,*x, c=0, s;
	x=(int *) calloc(n,sizeof(int));
	
	puts("enter 5 items. 3 symbols each");
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
		
		if(a[i]/100==0 || a[i]/100>9){
			printf("ERROR: Element have less than 3 symbols");
			return 0;
		}
	}

	for(i=0;i<n;i++){
		s=((a[i]/100)+(a[i]%100/10)+(a[i]%10));
		if(s%(i+1)==0){
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
