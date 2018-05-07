#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void){
	int y;
	int a,b,c,d;
	scanf("%d", &y);
	for(int i = y+1; i <= 10000; i ++){
		a = i%10;
		b = (i/10)%10;
		c = (i/100)%10;
		d = i/1000;
		if(a == b || a == c || a == d || b == c || b == d || c == d){
			continue;
		}
		else{
			printf("%d\n", i);
			return 0;
		}
	}
}