#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void){
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	int max = 0;
	if(a*b*c > max){max = a*b*c;}
	if(a+b+c > max){max = a+b+c;}
	if(a+b*c > max){max = a+b*c;}
	if((a+b)*c > max){max = (a+b)*c;}
	if(a*b+c > max){max = a*b+c;}
	if(a*(b+c) > max){max = a*(b+c);}
	printf("%d\n", max);
}