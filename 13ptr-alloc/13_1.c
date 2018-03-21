#include <stdio.h>
#include <malloc.h>

int main(){
	const int n=5;
	int a[n], i, k, s=0;
//	a=(int *) malloc (n, sizeof(int));
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++){
		s=s+a[i];
		if(a[i]<0 && a[i]%2==0){
				k++;
		}
	}
	s=s/(i+1);
	
	if(k!=0){
		printf("sredee ravno %d", s);
	} else {
		puts("there is no elements that < 0 and \%2 ==0");
	}
	
	//free(a);
	return 0;
}
