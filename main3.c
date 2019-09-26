#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int integer1, integer2;
	
	printf("input two integers : ");
	scanf("%d %d",&integer1,&integer2);
	
	int a,b,c,d,e;
	a=integer1+integer2;
	printf("+ result is : %d\n",a);
	
	b=integer1-integer2;
	printf("- result is : %d\n",b);

	c=integer1*integer2;
	printf("* result is : %d\n",c);

	d=integer1/integer2;
	printf("/ result is : %d\n",d);

	e=integer1%integer2;
	printf("%% result is : %d\n",e);
	return 0;
}
