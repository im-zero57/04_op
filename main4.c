#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int x,y,z,m;
	int a,b,c;
	
	x=1;
	a=3;
	b=4;
	c=5;
	z=3;
	
	y=a*x*x+b*x+c;
	m=(x+y+z)/3;
	printf("y=%d,m=%d\n",y,m); // 4주차 실습1
	
	int d=3;
	int cond1, cond2;
	
	cond1=2<d&&d<5;
	cond2=d>1||d<4&&d>3;
	
	printf("cond1=%d, cond2=%d\n", cond1, cond2);//4주차 실습2
	
	int integer1, integer2;
	
	printf("inpute two integers : ");
	scanf("%d %d",&integer1,&integer2);
	
	int e,f,g,h,i;
	e=integer1+integer2;
	printf("+ result is : %d\n",e);
	
	f=integer1-integer2;
	printf("- result is : %d\n",f);
	
	g=integer1*integer2;
	printf("* result is : %d\n",g);
	
	h=integer1/integer2;
	printf("/ result is : %d\n",h);
	
	i=integer1%integer2;
	printf("%% result is : %d\n",i);//4주차 실습3 
	return 0;
}
