#include<stdio.h>
#include<math.h>

int main(){
	int i, im;
	float x, *ptrx=&x, ans[3], biggest, middle, lowest;
				
	printf("enter x\n");
	scanf("%f", ptrx);
	
	ans[0]=(exp(x)+exp(-x))/(2);
	ans[1]=1+fabs(*ptrx);
	ans[2]=pow(1+pow(x,2),x);
	
	biggest = ans[0];
	for(i=0;i<3;i++){
		if(biggest<ans[i]){
			biggest=ans[i];
			im=i+1;
		}
	}
	
	printf("\nbiggest is #%d: %f\n", im, biggest);
	
	im=1;
	middle = ans[0];
	for(i=0;i<3;i++){
		if(middle<ans[i]&&ans[i]<biggest){
			middle=ans[i];
			im=i+1;
		}
	}
	printf("middle is #%d: %f\n", im, middle);
	
	im=1;
	lowest = ans[0];
	for(i=0;i<3;i++){
		if(lowest>ans[i] && ans[i]<middle){
			lowest=ans[i];
			im=i+1;
		}
	}
	printf("lowest is #%d: %f\n", im, lowest);
	return 0;
}
