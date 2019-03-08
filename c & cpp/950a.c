#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define min(x,y)         (x < y?x:y)
#define max(x,y)         (x > y?x:y)

int main(void){
	int l,r,a;
	scanf("%d%d%d", &l, &r, &a);
	int diff = abs(l-r);
	if(a >= diff){
		printf("%d\n", 2*max(l,r) + 2*((a-diff)/2));
	}
	else{
		printf("%d\n", 2*(min(l,r)+a));
	}
}