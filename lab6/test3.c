#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(void)
{
    double a, k, x, y, z, f, n, m;
     int key;
     system("cls");
	 printf("Function F(x):\n  1 - 2*x\n  2 - x^2\n  3 - x/3\n");
     printf("\nInput nomer: ");
     scanf("%d", &key);
     if (key==1) f=2*x;	
         else if (key==2)	f=pow(x, 2);	
      		 else if (key==3) f=x/3;	
                  else { system("color 14"); puts("key>3 \nERROR: key must be less than 4"); return(0); }
     puts("\nInput z: ");
     scanf("%lf",&z);
     if ( z>1 ) x=z;
        else x= pow(z, 2)+1;
        
//     puts("Input k, x, n, m"); //k = a, x = c
//     scanf("%lf%lf%lf%lf",&a, &c, &n, &m);

	puts("Input a:");
	scanf("%lf", &a);
	
	puts("Input k:");
	scanf("%lf", &k);
	
	puts("Input n:");
	scanf("%lf", &n);
	
	puts("Input m:");
	scanf("%lf", &m);

    y = sin(n*f)+cos(k*x)+log(m*x);
     
    printf ("y=%6.2lf\n ", y);
    getch();
}

